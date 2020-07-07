#include "Card.h"

Card::Card (int k, string suit) 
{
	if (k >= 1 && k <= 13 && 
	  (suit==HEARTS || suit==DIAMONDS || suit==CLUBS || suit==SPADES)) {
		m_suit = suit;
		m_number = k;	
	}
}

Card::Card (int n)
{
	int k;
	
    if (n <= 13)
    	m_suit = HEARTS;
    else if (n <= 26)
        m_suit = DIAMONDS;
    else if (n <= 39)
        m_suit = CLUBS;
    else
        m_suit = SPADES;	

    k = n % 13;
    if (k == 0)
	    k = 13;
	m_number = k;
}

Card::~Card()
{
}

void Card::print()
{
	cout << m_suit << " ";
	if (m_number == 1)
		cout << ACE;
	else if (m_number == 11)
		cout << JACK;
	else if (m_number == 12)
		cout << QUEEN;
	else if (m_number == 13)
		cout << KING;
	else
		cout << m_number;
}

bool Card::match_number(int number)
{
	if (number == m_number)
		return true;
	else
		return false;
}

bool Card::match_suit(string suit)
{
	if (suit == m_suit)
		return true;
	else
		return false;
}
