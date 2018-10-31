#include <iostream>

using namespace std;

string random_emoji() {
	return "";
}

int main() {
	cout << "Enter the number of emojis:" << endl;
	
    	int num = 0;
   	cin >> num;
	
	for (int i = 0; i < num; i++){
        	cout << random_emoji() << endl;
	}
}
