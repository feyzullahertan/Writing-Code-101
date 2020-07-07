#include "Game.h"

Game::Game()
{
	Game(0, 0, "");
}

Game::Game(int p, int c, string name)
{	
	int i;
	
	m_player_number = p;
	m_card_number = c;
	m_name = name;
	m_deck = new Deck;
	for (i = 0; i < MAX_PLAYERS; i++)
	 	m_hands [i] = new Hand;
}

Game::~Game()
{
	int i;
	
	for (i = 0; i < MAX_PLAYERS; i++)
		if (m_hands [i] != NULL)
			delete m_hands [i];
}

// returns the value of m_player_number
int Game::get_player_number()
{
	return m_player_number;
}

// sets the value of m_player_number
void Game::set_player_number(int x)
{
	m_player_number = x;
}

// returns the value of m_card_number
int Game::get_card_number()
{
	return m_card_number;
}

// sets the value of m_card_number
void Game::set_card_number(int x)
{
	m_card_number = x;
}

// returns the value of m_name
string Game::get_name()
{
	return m_name;
}

// sets the value of m_name
void Game::set_name(string x)
{
	m_name = x;
}

void Game::start()
{
	m_deck->shuffle();
	m_deck->cut();
	m_deck->deal(m_player_number, m_card_number, m_hands); 
}


void Game::show_all()
{
	int p;
	
	cout << "Game: " << m_name << endl;
	cout << "-------------------------\n\n";
	
	for (p = 0; p < m_player_number; p++) {
		cout << "Player " << p+1 << ":" << endl;	
		m_hands [p]->print ();
		cout << endl;
	}
	
	cout << "There are " << m_deck->get_count() << " cards in the deck\n"; 
}
