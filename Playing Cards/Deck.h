#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Card.h"
#include "Hand.h"

using namespace std;

#define DECK_SIZE	52

class Deck
{
	public:
		Deck();
		~Deck();
		void shuffle();
		Card* cut();
		Card* pick_card();
		void push(Card* crd);
		Card* pop();
		void print();
		void deal(int player, int n, Hand* hands[]);
		int get_count();
	protected:
		Card* m_cards [DECK_SIZE];
		int m_count;
};

#endif
