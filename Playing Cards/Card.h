#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

#define SPADES		"Maca"
#define HEARTS		"Kupa"
#define CLUBS		"Sinek"
#define DIAMONDS	"Karo"

#define ACE			"As"
#define JACK		"Vale"
#define QUEEN		"Kiz"
#define KING		"Papaz"


class Card
{
	public:
		Card (int n);
		Card (int k, string suit);
		~Card();
		void print();
		bool match_suit(string suit);
		bool match_number(int number);
		
	protected:
		int m_number;
		string m_suit;	
};

#endif
