#include <iostream>
#include <string>
using namespace std;

int main() {

    string questions[5] = {
        "What is the capital of India?",
        "Which language is used for DSA?",
        "Who is known as the Father of Computers?",
        "Which planet is known as the Red Planet?",
        "How many bits are there in 1 byte?"
    };

    string options[5][4] = {
        {"A. Mumbai", "B. Delhi", "C. Kolkata", "D. Chennai"},
        {"A. C++", "B. HTML", "C. CSS", "D. SQL"},
        {"A. Charles Babbage", "B. Bill Gates", "C. Elon Musk", "D. Steve Jobs"},
        {"A. Earth", "B. Venus", "C. Mars", "D. Jupiter"},
        {"A. 4", "B. 8", "C. 16", "D. 32"}
    };

    char correctAnswer[5] = {'B', 'A', 'A', 'C', 'B'};

    int prize[5] = {1000, 5000, 10000, 20000, 50000};

    int winnings = 0;

    cout << "====================================\n";
    cout << "       WELCOME TO KBC GAME\n";
    cout << "====================================\n\n";

    for(int i = 0; i < 5; i++) {

        cout << "Question " << i + 1 << " for Rs. "
             << prize[i] << "\n\n";

        cout << questions[i] << "\n\n";

        for(int j = 0; j < 4; j++) {
            cout << options[i][j] << "\n";
        }

        char answer;
        cout << "\nEnter your answer (A/B/C/D): ";
        cin >> answer;

        // Convert lowercase to uppercase
        answer = toupper(answer);

        if(answer == correctAnswer[i]) {
            winnings = prize[i];

            cout << "\nCorrect Answer! 🎉\n";
            cout << "You won Rs. " << winnings << "\n\n";
        }
        else {
            cout << "\nWrong Answer!\n";
            cout << "Correct answer was: "
                 << correctAnswer[i] << "\n";

            break;
        }
    }

    cout << "\n====================================\n";
    cout << "Game Over!\n";
    cout << "Your total winnings: Rs. "
         << winnings << "\n";
    cout << "====================================\n";

    return 0;
}