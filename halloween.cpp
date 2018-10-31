#include <iostream>
#include <vector>

using namespace std;

vector<string> emojis{ "hola" };

string random_emoji() {
    
	return emojis[rand() % emojis.size()];
}

int main() {
	cout << "Enter the number of emojis:" << endl;
	
    	int num = 0;
   	cin >> num;
	
	for (int i = 0; i < num; i++){
        	cout << random_emoji() << endl;
	}
}
