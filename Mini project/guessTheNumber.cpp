#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int generateNumber(){
    return rand() % 100 +1;
}
void playGame(){
    int gameNum = generateNumber();
    int guess;
    int attempts = 0;

    cout << "Guess a number between 1 and 100\n";
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < gameNum) {
            cout << "Too Low!\n";
        }
        else if (guess > gameNum) {
            cout << "Too High!\n";
        }
        else {
            cout << "\n🎉 Correct!\n";
            cout << "Attempts = " << attempts << endl;
            break;
        }
    }
}
int main(){
    srand(time(0));
    playGame();
    return 0;

}