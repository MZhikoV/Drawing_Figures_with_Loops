#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            for (int j = 1; j <= 5 * n; j++) {
                if (j <= 2 * n || j > (2 * n + n)) {
                    cout << '*';
                }
                else {
                    cout << ' ';
                }
            }
        }
        else if (i == ((n - 1) / 2)+1 ) {
            for (int j = 1; j <= 5 * n; j++) {
                if (j == 1 || j == 2 * n || j == (2 * n + (n + 1)) || j == 5 * n) {
                    cout << '*';
                }
                else if (j > (2 * n) && j <= (2 * n + n)) {
                    cout << '|';
                }
                else {
                    cout << '/';
                }
            }
        }
        else {
            for (int j = 1; j <= 5 * n; j++) {
                if (j == 1 || j == 2 * n || j == (2 * n + (n+1)) || j == 5 * n) {
                    cout << '*';
                }
                else if (j > (2 * n) && j <= (2 * n + n)) {
                    cout << ' ';
                }
                else {
                    cout << '/';
                }
            }
        }
        cout << endl;
    }

}
