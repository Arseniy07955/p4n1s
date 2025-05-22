#include <iostream>
#include <cstdlib>
#include <chrono>
#include <ctime> 
#include <thread> // Added for std::this_thread
using namespace std;

void displayProgressBar() {
    const int total_steps = 20;
    const int total_duration_ms = 1500;
    const int bar_width = 25;
    const int sleep_duration_per_step = total_duration_ms / total_steps;

    for (int i = 0; i <= total_steps; ++i) {
        cout << "[";
        int completed_chars = (i * bar_width) / total_steps;
        for (int j = 0; j < completed_chars; ++j) cout << "=";
        if (i < total_steps) cout << ">"; else cout << "="; // Ensure bar is full at 100%
        for (int j = 0; j < bar_width - completed_chars; ++j) cout << " ";
        cout << "] " << (i * 100) / total_steps << "%\r";
        cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(sleep_duration_per_step));
    }
    cout << endl; // Move to next line after progress bar completion
}

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
	displayProgressBar(); // Call the progress bar function
	writeDick(RandomInt());	
	return 0;
}
