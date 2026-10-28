// // STACK AND QUEUE QUESTIONS
// #include <stdio.h>
// #include <stdlib.h>

// #define MAX 5  


// int stack[MAX];
// int top = -1;


// int queue[MAX];
// int front = -1;
// int rear = -1;


// void push() {
//     int val;
//     if (top == MAX - 1) {
//         printf("\nStack Overflow! (Stack is full)\n");
//     } else {
//         printf("Enter element to push: ");
//         scanf("%d", &val);
//         top++;
//         stack[top] = val;
//         printf("Successfully pushed %d onto stack.\n", val);
//     }
// }


// void pop() {
//     if (top == -1) {
//         printf("\nStack Underflow! (Stack is empty)\n");
//     } else {
//         printf("\nPopped element: %d\n", stack[top]);
//         top--;
//     }
// }


// void stackDisplay() {
//     if (top == -1) {
//         printf("\nStack is empty.\n");
//     } else {
//         printf("Stack elements (Top to Bottom:\n");
//         for (int i = top; i >= 0; i--) {
//             printf("%d,", stack[i]);
//         }
//     }
// }


// void enqueue() {
//     int val;
//     if (rear == MAX - 1) {
//         printf("\nQueue Overflow! (Queue is full)\n");
//     } else {
//         if (front == -1) {
//             front = 0; 
//         }
//         printf("Enter element to enqueue: ");
//         scanf("%d", &val);
//         rear++;
//         queue[rear] = val;
//         printf("Successfully enqueued %d into queue.\n", val);
//     }
// }


// void dequeue() {
//     if (front == -1 || front > rear) {
//         printf("\nQueue Underflow! (Queue is empty)\n");
//     } else {
//         printf("\nDequeued element: %d\n", queue[front]);
//         front++;
       
//         if (front > rear) {
//             front = -1;
//             rear = -1;
//         }
//     }
// }


// void queueDisplay() {
//     if (front == -1 || front > rear) {
//         printf("\nQueue is empty.\n");
//     } else {
//         printf("\nQueue elements (Front to Rear):\n");
//         for (int i = front; i <= rear; i++) {
//             printf("%d ", queue[i]);
//         }
//         printf("\n");
//     }
// }



// int main() {
//     int choice;

//     while (1) {
//         printf("\n---------------------------\n");
//         printf("       MAIN MENU          \n");
//         printf("---------------------------\n");
//         printf("1. Push (Stack)\n");
//         printf("2. Pop (Stack)\n");
//         printf("3. Display Stack\n");
//         printf("4. Enqueue (Queue)\n");
//         printf("5. Dequeue (Queue)\n");
//         printf("6. Display Queue\n");
//         printf("7. Exit\n");
//         printf("---------------------------\n");
//         printf("Enter your choice (1-7): ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 push();
//                 break;
//             case 2:
//                 pop();
//                 break;
//             case 3:
//                 stackDisplay();
//                 break;
//             case 4:
//                 enqueue();
//                 break;
//             case 5:
//                 dequeue();
//                 break;
//             case 6:
//                 queueDisplay();
//                 break;
//             case 7:
//                 printf("\nExiting program... Goodbye!\n");
//                 exit(0);
//             default:
//                 printf("\nInvalid choice! Please enter a number between 1 and 7.\n");
//         }
//     }

//     return 0;
// }
// #include <stdio.h>

// void poly_add(int arr[], int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     printf("The sum of coefficients is %d\n", sum);
// }

// void poly_mul(int arr[], int n) {
//     long long product = 1;
//     for (int i = 0; i < n; i++) {
//         product *= arr[i];
//     }
//     printf("The product of coefficients is %lld\n", product);
// }

// void multiply_two_polynomials() {
//     int n1, n2;
//     printf("\n--- Multiply Two Polynomials ---\n");
//     printf("Enter number of terms for 1st polynomial: ");
//     if (scanf("%d", &n1) != 1 || n1 <= 0) return;
//     int poly1[n1];
//     for (int i = n1 - 1; i >= 0; i--) {
//         printf("Poly 1 - Enter element in x^%d : ", i);
//         scanf("%d", &poly1[i]);
//     }

//     printf("Enter number of terms for 2nd polynomial: ");
//     if (scanf("%d", &n2) != 1 || n2 <= 0) return;
//     int poly2[n2];
//     for (int i = n2 - 1; i >= 0; i--) {
//         printf("Poly 2 - Enter element in x^%d : ", i);
//         scanf("%d", &poly2[i]);
//     }

//     int res_size = n1 + n2 - 1;
//     int result[res_size];
//     for (int i = 0; i < res_size; i++) {
//         result[i] = 0;
//     }

//     for (int i = 0; i < n1; i++) {
//         for (int j = 0; j < n2; j++) {
//             result[i + j] += poly1[i] * poly2[j];
//         }
//     }

//     printf("Resultant Polynomial: ");
//     for (int i = res_size - 1; i >= 0; i--) {
//         printf("%dx^%d", result[i], i);
//         if (i > 0) printf(" + ");
//     }
//     printf("\n");
// }

// int main() {
//     int n;
//     printf("Enter your polynomial number of terms: ");
//     if (scanf("%d", &n) != 1 || n <= 0) {
//         printf("Invalid number of terms.\n");
//         return 1;
//     }
//     int arr[n];
//     for (int i = n - 1; i >= 0; i--) {
//         printf("Enter element in x^%d : ", i);
//         scanf("%d", &arr[i]);
//     }

//     poly_add(arr, n);
//     poly_mul(arr, n);
//     multiply_two_polynomials();

//     return 0;
// }
#include<stdio.h>
void gen_swap(arr[],int n){
      
}