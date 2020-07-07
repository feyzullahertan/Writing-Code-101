#ifndef HAND_H
#define HAND_H

#include "Card.h"

#define HAND_SIZE 52

class Hand
{
	public:
		Hand();
		~Hand();
		void give_card(Card* crd);
		Card* throw_card(int k);
		Card* throw_card(int number, string suit);
		void print();
	protected:
		Card* m_cards [HAND_SIZE];
		int m_count;
};

#endif
