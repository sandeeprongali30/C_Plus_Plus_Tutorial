#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << " ";
        }

        cout << "*";

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        if (i > 0)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        cout << "*";

        for (int j = 0; j < n - (i + 2); j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - (i + 3); j++)
        {
            cout << " ";
        }
        if (i < n - 2)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}