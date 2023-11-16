#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        if (i > 0) {
            for (int l = n; l >= 1; l--) {
                //if (i > 0) {
                    if (l > i) {
                        cout << ' ';
                    }
                    else {
                        cout << "*";
                    }
               // }

            }
        }
        if (i == 0) {
            for (int j = 0; j <= n + 1; j++) {
                if (j == n + 1) {
                    cout << "|";
                }
                /*else if (j == n + 1) {
                    cout << ' ';
                }*/
                else {
                    cout << ' ';
                }
            }
        }
        else {

            for (int j = 0; j <= n + 2; j++) {
                if (j == n + 2) {
                    cout << "| ";
                }
                else if (j == n + 1) {
                    cout << ' ';
                }
            }
        }
        for (int k = 1; k <=i; k++) {
           cout << '*';
            
        }

        cout << endl;
    }  
    return 0;
}
