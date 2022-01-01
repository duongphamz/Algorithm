// Suffix Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int aS[26] = { 0 };
    int aT[26] = { 0 };

    for (int i = 0; i < t.length(); i++) {
        aT[int(t[i]) - 97]++;

    }

    for (int j = 0; j < s.length(); j++) {
        aS[int(s[j]) - 97]++;
    }

    for (int i = 0; i < t.length(); i++) {
        if (aS[int(t[i]) - 97] < aT[int(t[i]) - 97]) {
            cout << "need tree" << endl;
            return 0;
        }
    }
    bool isAutomaton = false;
    if (s.length() == t.length()) {
        cout << "array" << endl;
        return 0;
    }
    else if (s.length() > t.length()) {
        int match = -1;
        bool isAutomaton = true;

        for (int i = 0; i < t.length(); i++) {
            bool indexFoundValidForAutomaton = false;
            for (int j = 0; j < s.length(); j++) {
                if (t[i] == s[j] && match < j) {
                    match = j;
                    indexFoundValidForAutomaton = true;
                    break;
                }
            }

            if (indexFoundValidForAutomaton == false) {
                isAutomaton = false;
                break;
            }
        }

        cout << (isAutomaton ? "automaton" : "both") << endl;
    }
    return 0;
}
