#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main ()
{
	
	srand (time(0));
	
	int suite = (rand () % 3) + 1;
	int card = (rand () % 12) + 1;
	
	
	switch (card){
		case 0:
			cout << "Two of ";
		break;
		
		case 1:
			cout << "Three of ";
		break;
		
		case 2:
			cout << "Four of ";
		break;
		
		case 3:
			cout << "Five of ";
		break;
		
		case 4:
			cout << "Six of ";
		break;
		
		case 5:
			cout << "Seven of ";
		break;
		
		case 6:
			cout << "Eight of ";
		break;
		
		case 7:
			cout << "Nine of ";
		break;
		
		case 8:
			cout << "Ten of ";
		break;
		
		case 9:
			cout << "Jack of ";
		break;
		
		case 10:
			cout << "Queen of ";
		break;
		
		case 11:
			cout << "King of ";
		break;
		
		case 12:
			cout << "Ace of ";
		break;
	}
	
		switch (suite){
		case 0:
			cout << "Hearts\n";
		break;
		
		case 1:
			cout << "Clubs\n";
		break;
		
		case 2:
			cout << "Spades\n";
		break;
		
		case 3:
			cout << "Diamonds\n";
	}
	
	
	return 0;
}
	