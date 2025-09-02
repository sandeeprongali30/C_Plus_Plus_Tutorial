#include <iostream>

using namespace std;

int main()
{
    // int n = 6;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         char ch;
    //         ch = 65 + j;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    int n = 3;
    int itr = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            itr = itr + 1;
            cout << itr << " ";
        }
        cout << endl;
    }
}