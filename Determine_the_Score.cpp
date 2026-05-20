//Determine the Score
#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, N;
        cin >> X >> N;

        int points_per_test = X / 10;
        int score = points_per_test * N;

        cout << score << endl;
    }

}
