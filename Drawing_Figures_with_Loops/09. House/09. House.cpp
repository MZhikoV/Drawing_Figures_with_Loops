#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= (n + 1) / 2; i++) {
        if (n % 2 == 0) {
            for (int j = 1; j <= ((n / 2) - i); j++) {
                cout << '-';
            }
            for (int k = ((n / 2) - i + 1); k <= ((n / 2) + i); k++) {
                cout << '*';
            }
            for (int p = ((n / 2) + i+1); p <= n; p++) {
                cout << '-';
            }
        }
        else {
            for (int j = 1; j <= ((n / 2) - i + 1); j++) {
                cout << '-';
            }
            for (int k = ((n / 2) - i + 1); k < ((n / 2) + i); k++) {
                cout << '*';
            }
            for (int p = ((n / 2) + i + 1); p <= n; p++) {
                cout << '-';
            }
        }
        cout << endl;
    }
    for (int l = (((n + 1) / 2) + 1); l <= n; l++) {
        for (int m = 1; m <= n; m++) {
            if (m == 1 || m == n) {
                cout << '|';
            }
            else {
                cout << '*';
            }
        }
        cout << endl;
    }
    return 0;
}