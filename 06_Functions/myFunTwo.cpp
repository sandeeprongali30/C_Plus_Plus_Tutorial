#include <iostream>

using namespace std;

void pourChai(int &cups)
{
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl;
}

int main()
{
    int chaiCups = 2;
    pourChai(chaiCups);
    // cout << "Total Cups are: " << chaiCups << endl; // Without & (Call by reference) Symbol
    cout << "Total Cups are: " << chaiCups << endl;
    return 0;
}