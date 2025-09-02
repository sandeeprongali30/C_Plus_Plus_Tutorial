#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // cout << "* ";
            // cout << i + 1 << " ";
            // cout << j + 1 << " ";
            cout << i + 1 - j << " ";
        }
        cout << endl;
    }
    return 0;
}