// Night at the Museum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numberOfAlphabets = 26;
	char startCharacter = 'a';
	int result = 0;
	string str;
	cin >> str;

	if (str.empty()) {
		cout << 0 << endl;
		return 0;
	}

	for (int i = 0; i < str.size(); i++) {
		int distance = abs(startCharacter - str[i]);
		result += min(distance, numberOfAlphabets - distance);
		startCharacter = str[i];
	}

	cout << result << endl;

	return 0;
}
