//Lottery number c++
#include <iostream>
#include <cstdlib>
#include <ctime>
//#include <windows.h> - pe windows/codeblocks

using namespace std;

int numbers[7], n, f[51], guess[7], number, lottery;

int main()
{
    srand((unsigned int) time(NULL));
    cout << "Please type 5 if you want to play 5/40 or 6 if you want to play 6/49!" << endl;
    cin >> number;

    if(number == 5)
        lottery = 40;
    else
        lottery = 49;

    int i = 1;
    while(i <= number)
    {
        int gen = rand() % lottery + 1;
        if(f[gen] == 0)
            f[gen] = 1, numbers[i] = gen;
        else
        {
            while(f[gen] == 1)
                gen = rand() % lottery + 1;
            f[gen] = 1, numbers[i] = gen;
        }
        i++;
    }

    cout << endl << "Please introduce " << number << " numbers in the range of 1 to " << lottery << endl;
    for(int i = 1; i <= number; i++)
        cin >> guess[i];

    int correct = 0;

    //system("cls"); - pe windows
    system("clear"); //pe mac

    for(int i = 1; i <= number; i++)
        for(int j = 1; j <= number; j++)
            if(numbers[i] == guess[j])
            {
                correct++;
                break;
            }

    cout << "The correct numbers are " << correct << endl;
    cout << "The lottery numbers are: ";
    for(int i = 1; i <= number; i++)
        cout << numbers[i] << " ";
    cout << endl;
    cout << "Your numbers are: ";
    for(int i = 1; i <= number; i++)
        cout << guess[i] << " ";
    if(correct == number)
        cout << endl << endl << "CONGRATULATIONS! YOU WON!";
    return 0;
}