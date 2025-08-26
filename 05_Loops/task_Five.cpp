#include <iostream>
#include <string>

using namespace std;

int main()
{
    string teaTypes[3] = {"Green Tea", "Lemon Tea", "Black Tea"};
    for (int i = 0; i < 3; i++)
    {
        if (teaTypes[i] == "Lemon Tea")
        {
            cout << "Skipping " << teaTypes[i] << "!" << endl;
            continue;
        }

        cout << "Brewing " << teaTypes[i] << "!" << endl;
    }

    return 0;
}