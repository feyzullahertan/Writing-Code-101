#ifndef GAME_H
#define GAME_H

#define MAX_PLAYERS 10

#include <string>
#include "Deck.h"
#include "Hand.h"

class Game
{
	public:
		Game();
		Game(int p, int c, string name = "");
		~Game();

		void set_name(string x); // sets the value of m_name
		string get_name(); // returns the value of m_name

		void set_card_number(int x); // sets the value of m_card_number
		int get_card_number(); // returns the value of m_card_number

		void set_player_number(int x); // sets the value of m_player_number
		int get_player_number(); // returns the value of m_player_number
		
		void start();
		void show_all();

	protected:
		string m_name;
		int m_card_number;
		int m_player_number;
		Hand* m_hands [MAX_PLAYERS];
		Deck* m_deck;
};

#endif
