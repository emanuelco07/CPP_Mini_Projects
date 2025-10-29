//Dice simulator c++
#include <iostream>
#include <ctime>
#include <cstdlib>
//#include <windows.h> - doar pe windows/codeblocks

using namespace std;

int main()
{
    srand((unsigned int) time(NULL));
    int dice = rand() % 6 + 1;
    int ok = 1;
    while(ok == 1)
    {
        cout << "DICE : " << dice << endl;
        cout << endl << "If you want to try again please press S, else press C or another key!" << endl;
        char c;
        cin >> c;
        if(c == 'S')
        {
            //system("cls"); - pe windows
            system("clear"); //pe mac 
            dice = rand() % 6 + 1;
        }
        else
        {
            //system("cls"); - pe windows
            system("clear"); //pe mac
            cout << "The simulator had stopped!";
            ok = 0;
        }
    }
    return 0;
}