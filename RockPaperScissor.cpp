//Rock paper scissors c++
#include <iostream>
#include <cstdlib>
#include <ctime>
//#include <windows.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;

int return_ai_throw()
{
    srand((unsigned int) time(NULL));
    return (rand() % 3) + 1;
}

void cout_start_function()
{
    cout << "Select your throw." << endl;
    cout << "1) ROCK" << endl;
    cout << "2) PAPER" << endl;
    cout << "3) SCISSORS" << endl;
}

void cout_ai_throw(int var)
{
    if(var == ROCK)
        cout << "AI throws ROCK." << endl;
    else if(var == PAPER)
        cout << "AI throws PAPER." << endl;
    else if(var == SCISSORS)
        cout << "AI thorws SCISSORS." << endl;
}

void verify_winner(int ai, int player, bool &d)
{
    if(ai == player)
    {
        d = true;
        cout << "DRAW! Play again!" << endl;
    }
    else if(player == ROCK && ai == SCISSORS)
        cout << "ROCK beats SCISSORS! YOU WIN!" << endl;
    else if(player == ROCK && ai == PAPER)
        cout << "PAPER beats ROCK! YOU LOSE!" << endl;
    else if(player == PAPER && ai == ROCK)
        cout << "PAPER beats ROCK! YOU WIN!" << endl;
    else if(player == PAPER && ai == SCISSORS)
        cout << "SCISSORS beats PAPER! YOU LOSE!" << endl;
    else if(player == SCISSORS && ai == ROCK)
        cout << "ROCK beats SCISSORS! YOU LOSE!" << endl;
    else if(player == SCISSORS && ai == PAPER)
        cout << "SCISSORS beats PAPER! YOU WIN!" << endl;

    cout << endl;
}

void verify_new_game(bool &d)
{
    if(d == false)
    {
        cout << "If you want to play a new game please press S, else press C!" << endl;
        char c;
        cin >> c;
        if(c == 'S')
        {
            //system("cls"); - pe windows
            system("clear"); //pe mac
            d = true;
        }
        else if(c == 'C')
        {
            //system("cls"); - pe windows
            system("clear"); //pe mac
            cout << "The game had stopped!";
            d = false;
        }
    }
}

void game()
{
    int ai_thorw = 0;
    int player_thorw = 0;

    bool draw = false;

    do
    {
        cout_start_function();
        cin >> player_thorw;

        ai_thorw = return_ai_throw();

        cout_ai_throw(ai_thorw);

        draw = false;

        verify_winner(ai_thorw, player_thorw, draw);

        verify_new_game(draw);
    }
    while(draw);
}

int main()
{
    game();
    return 0;
}