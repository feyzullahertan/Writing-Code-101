#include <iostream>
#include "Game.h"
using namespace std;

int main(int argc, char** argv) {
	Game pisti (2, 4, "Pisti");
	pisti.start();
	pisti.show_all();
	
	return 0;
}
