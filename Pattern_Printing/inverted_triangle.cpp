#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int k = i; k < n; k++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
    return 0;
}