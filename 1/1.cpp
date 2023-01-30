#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum) {
    srand(time(NULL));
    int randomNum = rand() % maxnum + 1;

    int guessNum, numGuesses = 0;
    do {
        cout << "Arvaus: ";
        cin >> guessNum;
        numGuesses++;

        if (guessNum > randomNum) {
            cout << "Luku on pienempi" << endl;
        } else if (guessNum < randomNum) {
            cout << "Luku on suurempi" << endl;
        }
    } while (guessNum != randomNum);

    cout << "Oikea vastaus. " << endl;   
    return numGuesses;
}

int main() {
    int maxnum;
    cout << "Anna korkein arvo: ";
    cin >> maxnum;

    int guesses = game(maxnum);
    cout << "Arvauksia: " << guesses << endl;

    return 0;
}
