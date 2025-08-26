#include <iostream>

using namespace std;

int main()
{
    int teaCups = 5;
    for (int i = 1; i <= teaCups; i++)
    {
        cout << "Brewing " << i << " cup of tea..." << endl;
    }
    cout << "Outside of Loop" << endl;
    return 0;
}