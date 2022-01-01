// Bear and Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int currentMinute = 0;

    for (int i = 0; i < n; i++) {
        int minute;
        cin >> minute;
        
        int duration = minute - currentMinute;
        if (duration <= 15) {
            currentMinute = minute;
        }
        else {
            break;
        }
    }


    cout << min(90, currentMinute + 15);
}
