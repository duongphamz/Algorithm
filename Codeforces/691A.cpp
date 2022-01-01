https://codeforces.com/problemset/problem/691/A

#include <iostream>
using namespace std;


int main()
{
    int n;

    cin >> n;
    if (n == 0) {
        cout << "NO";
        return 0;
    }

    if (n == 1) {
        int button;
        cin >> button;
        if (button == 0) {
            cout << "NO";
        }
        else {
            cout << "YES";
        }
        return 0;
    }
    int numberOfButtonsNotFastened = 0;

    for (int i = 0; i < n; i++) {
        int button;
        cin >> button;
        if (button == 0) {
            numberOfButtonsNotFastened++;
        }
        if (numberOfButtonsNotFastened == 2) {
            cout << "NO";
            return 0;
        }
    }

    if (numberOfButtonsNotFastened == 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
