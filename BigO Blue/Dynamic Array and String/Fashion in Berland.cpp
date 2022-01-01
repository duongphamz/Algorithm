// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int nA, nB;
    int k, m;

    cin >> nA >> nB;
    cin >> k >> m;
    int maxNumberOfArrayA = 0;
    int minNumberOfArrayB = 0;

    for (int i = 0; i < nA; i++) {
        int number;
        cin >> number;
        if (i + 1 == k) {
            maxNumberOfArrayA = number;
        }
    }

    for (int j = 0; j < nB; j++) {
        int number;
        cin >> number;
        if (j == nB - m) {
            minNumberOfArrayB = number;
        }
    }

    cout << (maxNumberOfArrayA < minNumberOfArrayB ? "YES" : "NO");
}

