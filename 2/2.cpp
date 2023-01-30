#include <iostream>
#include <ctime>
#include "game.h"

using namespace std;

void Game::printGameResult()
{
    cout << "Correct answer: " << answer << endl;
    cout << "Guesses: " << guess_count << endl;
}

Game::Game()
{
    answer = 0;
    guess_count = 0;
    srand(time(NULL));
    cout << "Max value: ";
    cin >> maxnum;
    answer = rand() % maxnum + 1;
    cout << "answer: " << answer << "maxnum: " << maxnum << endl;
}

void Game::play()
{
    int guess;
    while (true)
    {
        cout << "Give a number between 1 and " << maxnum << endl;
        cin >> guess;
        guess_count++;
        if (guess == answer)
        {
            printGameResult();
            break;
        }
        else if (guess > answer)
        {
            cout << "Too big" << endl;
        }
        else
        {
            cout << "Too small" << endl;
        }
    }
}

int main()
{
    Game gameObject;
    gameObject.play();
    return 0;
}