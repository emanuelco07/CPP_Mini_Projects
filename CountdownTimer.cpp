//Countdown timer c++
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    int seconds = 0;
    cout << "Seconds: ";
    cin >> seconds;
    while(seconds > 0)
    {
        int h = seconds / 3600;
        int m = (seconds % 3600) / 60;
        int s = seconds % 60;

        cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << ":" << setfill('0') << setw(2) << s << "\r";

        fflush(stdout);

        clock_t stop = clock() + CLOCKS_PER_SEC;
        while(clock() < stop) { }

        seconds--;
    }
    cout << "\rTimes's up!";
    return 0;
}