#include <iostream>
#include <string>
using namespace std;

int main() {
	
	char ch1[50], ch2[50];
	int count = 1;

	cout << endl;
	cout << "                                               " << "Welcome To Word Guessing Game !" << endl << endl;

	//For storing characters //
	cout << "Enter the characters  to store in array: ";
	cin.getline(ch1, 50);
	system("cls");
	
	for (int i = 0; ch1[i] != '\0';){
		cout << "Enter " << count << " character: ";
		cin >> ch2[i];
		if (ch2[i] == ch1[i]){
			cout << "word Found!" << endl << endl;
			count++;
			i++;
		}
		else if (ch2[i] != ch1[i]){
			for (int j = 0; ch1[i] != '\0';){
				cout << "Word Not Found! Try again " << endl << endl;
				cout << "Enter " << count << " character: ";
				cin >> ch2[i];
				if (ch2[i] == ch1[i]){
					cout << "Word Found!" << endl << endl;
					count++;
					i++;
					break;
				}
				
			}
		}
	}
		return 0;
		}
