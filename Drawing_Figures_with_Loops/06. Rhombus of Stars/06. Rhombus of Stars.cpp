#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j > 0; j--) {
            if (i == j) {
                cout << "*";
            }
            else {
                if (j > i) {
                    cout << " ";
                }
                else {
                    cout << " *";
                }
            }
        }
        cout<<endl;
    }
    for (int i = n-1; i >0; i--) {
        for (int j = n; j > 0; j--) {
            if (i == j) {
                cout << "*";
            }
            else {
                if (j > i) {
                    cout << " ";
                }
                else {
                    cout << " *";
                }
            }
        }
        cout << endl;
    }

    return 0;
}