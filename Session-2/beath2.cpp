#include <iostream>
using namespace std;

void calculateScores(int sum, int diff) {
    int score1 = (sum + diff) / 2;
    int score2 = (sum - diff) / 2;

    // Check if the scores are valid
    if (score1 >= 0 && score2 >= 0 && (score1 + score2 == sum) && (abs(score1 - score2) == diff)) {
        cout << score1 << " " << score2 << endl;
    } else {
        cout << "impossible" << endl;
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int sum, diff;
        cin >> sum >> diff;
        calculateScores(sum, diff);
    }

    return 0;
}