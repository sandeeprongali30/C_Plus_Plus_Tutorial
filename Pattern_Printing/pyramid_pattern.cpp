#include <iostream>

using namespace std;

int main()
{
    int count = 8;
    for (int i = 0; i < count; i++)
    {
        for (int j = count - (i + 1); j > 0; j--)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }

        for (int j = 0; j < i; j++)
        {
            cout << i - j;
        }
        cout << endl;
    }

    return 0;
}