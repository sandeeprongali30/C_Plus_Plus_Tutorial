#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 8;
    for (int i = 2; i * i <= n - 1; i++) // root n * root n
    {
        if (n % i == 0)
        {
            cout << n << " is not a Prime No" << endl;
            return 0;
        }
    }
    cout << n << " is a Prime No" << endl;
    return 0;
}