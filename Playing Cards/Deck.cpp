#include "Deck.h"

Deck::Deck()
{
  	int i;
  	
  	for (i = 0; i < DECK_SIZE; i++)
        m_cards [i] = new Card (i + 1);
    m_count = i; 
    // cout << m_count << " kart var\n";
    // print ();
    // system ("PAUSE");
	// baþlangýçta 52 kart sýralý olsun
}

Deck::~Deck()
{
	int i;
	
	for (i = 0; i < m_count; i++)
		if (m_cards [i] != NULL)	
			delete m_cards [i];
	m_count = 0;
}

void Deck::shuffle()
{
	Card* crd;
  	int i;
   
    srand (time(NULL));
    for (i = 0; i < 100; i++) {
        crd = pick_card ();
        if (crd != NULL)
        	push (crd);
    }
}

Card* Deck::pick_card()
{
	// Pick kth card randomly
	int i, k;
	Card* crd;
	
	if (m_count >= 1) {
		k = rand () % m_count;
		crd = m_cards [k];
		for (i = k; i < m_count - 1; i++) {
			m_cards [i] = m_cards [i + 1];
		}
		m_cards [m_count - 1] = NULL;
		m_count--;
		
		return crd;
	} else
		return NULL;
}


//  1 2 3 4 5 3.den kestim 3 4 5 1 2 olacak
Card* Deck::cut()
{
	int k, i, j;
	Card* dck [DECK_SIZE];
	Card *crd;
	
	k = rand () % m_count;
	crd = m_cards [k];
	
	for (i = k, j = 0; i < m_count; i++, j++)
		dck [j] = m_cards [i];
		
	for (i = 0; i < k; i++, j++)  
		dck [j] = m_cards [i];
		
	for (i = 0; i < m_count; i++)
		m_cards [i] = dck [i];
		
	return crd;
}

Card* Deck::pop()
{
	Card* crd;
	int k;
	
	if (m_count >= 1) {
		k = m_count - 1;
		crd = m_cards [k];
		m_cards [k] = NULL;
		m_count--;
		return crd;
		
	} else
		return NULL;
}

void Deck::push(Card* crd)
{
	if (m_count < DECK_SIZE) {
		m_cards [m_count] = crd;
		m_count++;
	} else {
		cout << "Deck is full!" << endl;
	}	
}

void Deck::print()
{
	int i;
	
	if (m_count <= 0)
		cout << "Deck is empty\n";
		
	for (i = 0; i < m_count; i++) {
		cout << i << " ";
		m_cards [i]->print ();
		cout << endl;
	}
}

void Deck::deal(int player, int n, Hand* hands[])
{
	int p, i;
	Card* crd;
	
	// Kartlarýn birer birer daðýtýldýðýný varsaydým. n kart daðýtýlýyor.
	for (i = 0; i < n; i++) {
		for (p = 0; p < player; p++) {
			crd = pop();
			hands [p]->give_card (crd);
		}
	}
}

int Deck::get_count()
{
	return m_count;
}
