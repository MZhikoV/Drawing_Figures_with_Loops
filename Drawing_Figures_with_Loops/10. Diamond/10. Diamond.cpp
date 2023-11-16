#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1) {
        cout << '*';
    }
    else if (n == 2) {
        cout << "**";
    }
    else {
        for (int i = 1; i <= (n + 1) / 2; i++) {
            if (n % 2 == 0) {
                for (int j = 1; j <= n; j++) {
                    if (j == ((n / 2) - i + 1) || j == ((n / 2) + i)) {
                        cout << '*';
                    }
                    else {
                        cout << '-';
                    }
                }
            }
            else {
                cout << "todo";
            }
            cout << endl;
        }


    }
    return 0;
}