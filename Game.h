#include <iostream>
#include <string>

using namespace std;

class Game
{
private:
	int defeated;
	string userName;

public:
	int getDefeated() { return defeated; }
	string getUserName() { return userName; }
};