#include <iostream>

using namespace std;

int main()
{
    int chai[3][7] = {
        {50, 60, 55, 70, 65, 80, 75},
        {40, 55, 60, 65, 70, 75, 80},
        {45, 50, 55, 60, 65, 70, 75}

    };
    for (int i = 0; i < 3; i++)
    {
        cout << "Types of Tea at Shop " << i + 1 << endl;
        for (int j = 0; j < 7; j++)
        {
            cout << chai[i][j] << " Teas" << endl;
        }
    }
}