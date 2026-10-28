#include <stdio.h>

#define MAX_CARDS 52

void print_hand(const int hand[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", hand[i]);
	}
	printf("\n");
}

void insert_card(int hand[], int size, int new_card)
{
	int position = size - 1;

	while (position >= 0 && hand[position] > new_card)
	{
		hand[position + 1] = hand[position];
		position--;
	}

	hand[position + 1] = new_card;
}

int main(void)
{
	int hand[MAX_CARDS];
	int card_count;

	printf("Enter the number of cards (1-%d): ", MAX_CARDS);
	if (scanf("%d", &card_count) != 1 || card_count < 1 || card_count > MAX_CARDS)
	{
		printf("Invalid number of cards.\n");
		return 1;
	}

	for (int i = 0; i < card_count; i++)
	{
		int new_card;

		printf("Enter card %d: ", i + 1);
		if (scanf("%d", &new_card) != 1)
		{
			printf("Invalid card value.\n");
			return 1;
		}

		insert_card(hand, i, new_card);

		printf("Sorted hand after draw %d: ", i + 1);
		print_hand(hand, i + 1);
	}

	printf("Final hand in ascending order: ");
	print_hand(hand, card_count);

	return 0;
}