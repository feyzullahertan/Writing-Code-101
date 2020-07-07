#include "Hand.h"

Hand::Hand()
{
	int i;
	
	for (i = 0; i < HAND_SIZE; i++)
		m_cards [i] = NULL;
	m_count = 0;
}


Hand::~Hand()
{
	int i;
	
	for (i = 0; i < HAND_SIZE; i++)
		if (m_cards [i] != NULL)
			delete m_cards [i];
}


void Hand::give_card(Card* crd)
{
	m_cards [m_count] = crd;
	m_count++;
}


Card* Hand::throw_card(int k)
{
	Card* crd;
	int i;
	
	crd = m_cards [k];
	for (i = k; i < m_count - 1; i++)
		m_cards [i] = m_cards [i + 1];
	m_cards [i] = NULL;
	m_count--;
	
	return crd;
}


Card* Hand::throw_card(int number, string suit)
{
	Card* cards [HAND_SIZE]; // uyan kartlarý burada saklayacaðým
	int i, k;
	
	// Önce hem sayýsý hem de rengi uyan var mý diye bak.
	for (i = 0; i < m_count && number != 0 && suit != ""; i++) {
		if (m_cards [i]->match_number (number) && m_cards [i]->match_suit (suit)) 
			return throw_card (i);
	}
	
	// Sonra sayý...
	for (i = 0; i < m_count && number != 0; i++) {
		if (m_cards [i]->match_number (number)) 
			return throw_card (i);
	}	
	
	// Sonra renk...
	for (i = 0; i < m_count && suit != ""; i++) {
		if (m_cards [i]->match_suit (suit)) 
			return throw_card (i);
	}	
	
	// Olmadý rastgele bir kart at
	k = rand () % m_count;
	return throw_card (k);
}


void Hand::print()
{
	int i;
	
	for (i = 0; i < m_count; i++) {
		m_cards [i]->print ();
		cout << "  ";
	}
	cout << endl;
} 
