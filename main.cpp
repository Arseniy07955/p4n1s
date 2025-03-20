#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int RandomInt()
{
	srand((unsigned)time(0));
	int i;
	i = (rand()%7)+1;
	return i;
}

void writeDick(int id)
{
	switch(id)
	{
		case 1:
			cout << "BIG PENIS!\n";
			break;
		case 2:
			cout << "GIANT COCK!\n";
			break;
		case 3: 
			cout << "HUGE BALLS!\n";
			break;
		case 4:
			cout << "SMELLY SAUSAGE!\n";
			break;
		case 5:
			cout << "SLIPPERY SNAKE!\n";
			break;
		case 6:
			cout << "LEAKING SCHLONG!\n";
			break;
		case 7:
			cout << "PIPE BOMB!\n";
			break;
	}
}

int main()
{
	writeDick(RandomInt());	
	return 0;
}
