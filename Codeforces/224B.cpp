#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1e5 + 5;

int fre[MAX];

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int unique = 0;

    for (int i = 0; i < n; i++) {
        fre[a[i]]++;

        if (fre[a[i]] == 1) {
            unique++;
        }

        if (unique == k) {
            for (int j = 0; j < i + 1; j++) {
                fre[a[j]]--;
                if (fre[a[j]] == 0) {
                    cout << j + 1 << " " << i + 1;
                    return 0;
                }
            }
        }
    }

    cout << "-1 -1" << endl;
    return 0;
}
