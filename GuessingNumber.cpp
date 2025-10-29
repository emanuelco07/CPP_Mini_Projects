//Guessing number c++
#include <iostream>
#include <ctime>
//#include <windows.h> - doar pe windows/codeblocks
#include <cstdlib>

using namespace std;

int number, guess, v[100001], n;

void reset_game()
{
    srand((unsigned int) time(NULL));
    number = rand() % 100 + 1;
    n = 0;
}

void moves()
{
    cout << endl << "MOVES" << endl;
    for(int i = 1; i <= n; i++)
        cout << "Your " << i << " guess was" << " : " << v[i] << endl;
}

void game()
{
    reset_game();
    cout << "Enter a guessing number in the range of 1 to 100:" << endl;
    while(1 == 1)
    {
        cin >> guess;
        if(!(guess >= 1 && guess <= 100))
        {
            //system("cls"); - pe windows
            system("clear"); //pe mac
            cout << "Please, enter a guessing number in the range of 1 to 100:" << endl;
            continue;
        }
        v[++n] = guess;
        if(guess > number)
        {
            //system("cls"); - pe windows
            system("clear"); //pe mac
            cout << "Enter a lower number" << endl;
        }
        else if(guess < number)
        {
            //system("cls"); - pe windows
            system("clear"); //pe mac
            cout << "Enter a higher number" << endl;
        }
        else
        {
            //system("cls"); - pe windows
            system("clear"); //pe mac
            cout << "Congratulations! The number is correct!" << endl;
            moves();
            cout << endl << "If you want to start a new game press S, else press C !" << endl;
            char c;
            cin >> c;
            if(c  == 'S')
            {
                //system("cls"); - pe windows
                system("clear"); //pe mac
                cout << "Enter a number in the range of 1 to 100:" << endl;
                reset_game();
                continue;
            }
            else
            {
                //system("cls"); - pe windows
                system("clear"); //pe mac
                cout << "You had stop the game!";
                break;
            }
        }
    }
}

int main()
{
    game();
    return 0;
}