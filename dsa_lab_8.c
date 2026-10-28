#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *create() {
    int x;
    struct node *newnode;

    scanf("%d", &x);

    if (x == -1) {
        return NULL;
    }

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;

    printf("Enter left child of %d (-1 for no node): ", x);
    newnode->left = create();

    printf("Enter right child of %d (-1 for no node): ", x);
    newnode->right = create();

    return newnode;
}

void preorder(struct node *root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct node *root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main() {
    struct node *root;

    printf("Enter root value (-1 for no node): ");
    root = create();

    printf("\nPreorder  : ");
    preorder(root);

    printf("\nInorder   : ");
    inorder(root);

    printf("\nPostorder : ");
    postorder(root);

    printf("\n");
    return 0;
}
