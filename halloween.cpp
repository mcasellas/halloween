#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

vector<string> emojis{ "👻", "🔪", "🧛‍♂️", "💀", "☠️", "🎃"};

string random_emoji() {
	return emojis[rand() % emojis.size()];
}

int main() {
    
    cout << "👻 Enter the number of emojis:" << endl;
    int num = 0;
    cin >> num;
    
    srand(time(0));
    
    cout << "Beware of the spooky emojis! 🎃" << endl;
    
    for (int i = 0; i < num; i++){
        int chars = 20;
        int random = rand()%chars;
        for (int j = 0; j < random; j++) cout << "._";
        cout << random_emoji();
        for (int j = 0; j < chars-random; j++) cout << "._";
        cout << endl;
    }
    
}
