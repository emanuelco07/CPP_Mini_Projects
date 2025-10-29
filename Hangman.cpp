//Hangman c++
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <ctime>
//#include <windows.h> - pe windows/codeblocks

using namespace std;
ifstream fin("hangman.in");

char cuvinte[256][256], cuvant_ales[256], cuvant_afisat[256], lit;
int n = 1, incercari = 6;

void setare_cuvant()
{
    for(int i = 0; i < 255; i++)
        cuvant_afisat[i] = '_';
}

void citire_cuvinte_fisier()
{
    while(fin.get(cuvinte[n], 256))
        n++, fin.get();
    n--;
}

void alegere_cuvant(int val)
{
    srand((unsigned int) time(NULL));
    int random = rand() % n + 1;
    strcpy(cuvant_ales, cuvinte[random]);
}

void verificare_cuvant(char litera, int &ver)
{
    int l = strlen(cuvant_ales);
    ver = 0;
    for(int i = 0; i < l; i++)
        if(litera == cuvant_ales[i])
            cuvant_afisat[i] = litera, ver = 1;
}

int verificare_win()
{
    int l = strlen(cuvant_ales);
    for(int i = 0; i < l; i++)
        if(cuvant_afisat[i] == '_')
            return 0;
    return 1;
}

void afisare_cuvant_ales()
{
    int l = strlen(cuvant_ales);
    for(int i = 0; i < l; i++)
        cout << cuvant_afisat[i];
    cout << '\n';
}

void game()
{
    citire_cuvinte_fisier();
    alegere_cuvant(n);
    setare_cuvant();
    int win = 0, var = 0, l = strlen(cuvant_ales);
    cout << "Cuvantul are " << l << " litere." << endl;
    cout << "Ai 6 incercari gresite, mult succes!" << endl;
    afisare_cuvant_ales();
    while(win == 0 && incercari != 0)
    {
        cin >> lit;
        //system("cls"); - pe windows
        system("clear"); //pe mac
        verificare_cuvant(lit, var);
        if(var == 0)
        {
            incercari--;
            cout << "Litera introdusa nu se gaseste in cuvant!" << endl;
            cout << "Mai ai " << incercari << " incercari!" << endl << endl;
        }
        else
        {
            cout << "Litera introdusa se gaseste in cuvant!" << endl;
            cout << "Mai ai " << incercari << " incercari!" << endl << endl;
        }
        afisare_cuvant_ales();
        win = verificare_win();
        if(win == 1)
            cout << "FELICITARI!!! AI CASTIGAT!!!" << endl;
        else if(incercari == 0)
            cout << "Incercarile s-au terminat, imi pare rau!" << endl;
    }
}

int main()
{
    game();
    return 0;
}