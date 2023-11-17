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
        if (n % 2 == 0) {
            for (int i = 1; i <= (n + 1) / 2; i++) {
                for (int j = 1; j <= n; j++) {
                    if (j == ((n / 2) - i + 1) || j == ((n / 2) + i)) {
                        cout << '*';
                    }
                    else {
                        cout << '-';
                    }
                }
                cout << endl;
            }
            for (int i = ((n + 1) / 2)+1; i <= n; i++) {
                for (int j = n; j >=1; j--) {
                    if (j == ((n / 2) + i) /*|| j == ((n / 2) + i)*/) {
                        cout << '*';
                    }
                    else {
                        cout << '-';
                    }
                }
                cout << endl;
            }
        }
            else {
                cout << "todo";
            }
            cout << endl;


    }
    return 0;
}