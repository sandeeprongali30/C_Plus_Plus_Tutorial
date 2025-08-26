#include <iostream>

using namespace std;

int main()
{
    string teaTypes[5] = {"Oolong Tea", "Orange Tea", "Green Tea", "Lemon Tea", "Black Tea"};

    for (int i = 0; i < 5; i++)
    {
        cout << "Brewing " << teaTypes[i] << "..." << endl;
        for (int j = 1; j < 4; j++)
        {
            cout << "Preparing " << j << " cup of " << teaTypes[i] << "!" << endl;
        }
    }

    return 0;
}