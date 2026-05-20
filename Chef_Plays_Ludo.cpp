//Chef Plays Ludo
#include <iostream>

using namespace std;

int main() {
    int T, X;
    cin >> T;

    while (T--) {
        cin >> X;

        if (X == 6) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
