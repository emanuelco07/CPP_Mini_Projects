//Savings calculator c++
#include <iostream>
#include <iomanip>

using namespace std;

double balance, annualContribution, rateOfReturn;
int total_years;

int main()
{
    do
    {
        cout << "Initial Deposit: ";
        cin >> balance;
        if(balance < 0)
            cout << "Initial deposit must be >= 0" << endl;
    }while(balance < 0);

    do
    {
        cout << "Annual contribution: ";
        cin >> annualContribution;
        if(annualContribution < 0)
            cout << "Annual contribution must be >= 0" << endl;
    }while(annualContribution < 0);

    do
    {
        cout << "Rate of return: ";
        cin >> rateOfReturn;
        if(rateOfReturn <= 0)
            cout << "Rate of return must be > 0" << endl;
    }while(rateOfReturn <= 0);

    do
    {
        cout << "Year to grow: ";
        cin >> total_years;
        if(total_years <= 0)
            cout << "Total years must be > 0" << endl;
    }while(total_years <= 0);

    cout << endl;
    cout << setw(10) << "Year";
    cout << setw(18) << "Start Balance";
    cout << setw(16) << "Interest";
    cout << setw(16) << "End Balance";
    cout << endl;

    for(int i = 1; i <= 60; i++)
        cout << "*";
    cout << endl;

    for(int year = 1; year <= total_years; year++)
    {
        cout << setw(10) << year;
        cout << setw(18) << fixed << setprecision(2) << balance;

        double interest = balance * (rateOfReturn / 100);
        balance += interest + annualContribution;

        cout << setw(16) << fixed << setprecision(2) << interest;
        cout << setw(16) << fixed << setprecision(2) << balance;
        cout << endl;
    }
    return 0;
}