// Passwords.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct compare {
    inline bool operator()(const std::string& first,
        const std::string& second) const
    {
        return first.size() < second.size();
    }
};

int main()
{
    int n, k;
    cin >> n >> k;
    vector<string> v;
    string password;

    for (int i = 0; i < n; i++) {
        string pass;
        cin >> pass;
        v.push_back(pass);
    }
    cin >> password;

    compare c;
    sort(v.begin(), v.end(), c);

    int bestCaseTime = 0;
    int worstCaseTime = 0;

    for (int i = 0; i < n; i++) {
        bestCaseTime++;
        if (password.length() == v[i].length()) {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        worstCaseTime++;
        if (password.length() < v[i].length()) {
            worstCaseTime--;
            break;
        }
    }

    bestCaseTime += ((bestCaseTime - 1) / k) * 5;
    worstCaseTime += ((worstCaseTime - 1) / k) * 5;
    
    cout << bestCaseTime << " " << worstCaseTime << endl;
}

