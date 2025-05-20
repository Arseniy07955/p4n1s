#include <iostream>
#include <cstdlib>
#include <chrono>
#include <ctime> 
using namespace std;

int RandomInt()
{
	int i;
	i = (rand()%14)+1;
	return i;
}

void writeDick(int id)
{
	switch(id)
	{
		case 1:
			cout << "-------------------------\n";
			cout << "BIG PENIS!\n";
			cout << "-------------------------\n";
			break;
		case 2:
			cout << "-------------------------\n";
			cout << "GIANT COCK!\n";
			cout << "-------------------------\n";
			break;
		case 3: 
			cout << "-------------------------\n";
			cout << "HUGE BALLS!\n";
			cout << "-------------------------\n";
			break;
		case 4:
			cout << "-------------------------\n";
			cout << "SMELLY SAUSAGE!\n";
			cout << "-------------------------\n";
			break;
		case 5:
			cout << "-------------------------\n";
			cout << "SLIPPERY SNAKE!\n";
			cout << "-------------------------\n";
			break;
		case 6:
			cout << "-------------------------\n";
			cout << "LEAKING SCHLONG!\n";
			cout << "-------------------------\n";
			break;
		case 7:
			cout << "-------------------------\n";
			cout << "PIPE BOMB!\n";
			cout << "-------------------------\n";
			break;
		case 8:
			cout << "-------------------------\n";
			cout << "MEGA DONG!\n";
			cout << "-------------------------\n";
			break;
		case 9:
			cout << "-------------------------\n";
			cout << "COLOSSAL CLAPPER!\n";
			cout << "-------------------------\n";
			break;
		case 10:
			cout << "-------------------------\n";
			cout << "WONDER WEINER!\n";
			cout << "-------------------------\n";
			break;
		case 11:
			cout << "-------------------------\n";
			cout << "TERRIFIC TOOL!\n";
			cout << "-------------------------\n";
			break;
		case 12:
			cout << "-------------------------\n";
			cout << "FANTASTIC FRANKFURTER!\n";
			cout << "-------------------------\n";
			break;
		case 13:
			cout << "-------------------------\n";
			cout << "SUPERB SCHLONG!\n";
			cout << "-------------------------\n";
			break;
		case 14:
			cout << "-------------------------\n";
			cout << "GLORIOUS GLIZZY!\n";
			cout << "-------------------------\n";
			break;
	}
}

int main()
{
	srand(static_cast<unsigned int>(std::chrono::steady_clock::now().time_since_epoch().count()));
	writeDick(RandomInt());	
	return 0;
}
