#include <iostream>
using namespace std;

int main() {
    int teaType, correctCount;
    int contestantAnswers[5];
    
    while (cin >> teaType) {
        correctCount = 0;
        
        for (int i = 0; i < 5; i++) {
            cin >> contestantAnswers[i];
            
            if (contestantAnswers[i] == teaType) {
                correctCount++;
            }
        }
        
        cout << correctCount << endl;
    }
    
    return 0;
}