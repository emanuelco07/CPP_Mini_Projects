//Coin flip simulator
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string flipcoin();

int count_heads, count_tails, n;

int main()
{
    srand((unsigned int) time(NULL));
    cout << "Please, introduce how many times you want to flip the coin!" << endl;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(flipcoin() == "Heads")
        {
            cout << "Heads" << endl;
            count_heads++;
        }
        else
        {
            cout << "Tails" << endl;
            count_tails++;
        }
    }
    cout << endl;
    cout << "The total number of heads are: " << count_heads << endl;
    cout << "The total number of tails are: " << count_tails;
    return 0;
}

string flipcoin()
{
    if(rand() % 2 == 0)
        return "Heads";
    return "Tails";
}