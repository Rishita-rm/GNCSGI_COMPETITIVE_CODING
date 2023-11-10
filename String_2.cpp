// Blobby Volley Scores
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int aliceScore = 0, bobScore = 0;

        for (int i = 0; i < N; i++) {
            if (S[i] == 'A') {
                aliceScore++;
            } else {
                bobScore++;
            }

            // Switch server for the next turn
            swap(aliceScore, bobScore);
        }

        cout << aliceScore << " " << bobScore << endl;
    }

    return 0;
}
