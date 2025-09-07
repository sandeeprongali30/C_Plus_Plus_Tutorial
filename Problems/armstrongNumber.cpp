#include <iostream>

using namespace std;

int length(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

bool armstrong(int num)
{
    int ans = 0;
    int comp = num;
    bool b = false;
    int n = length(num);
    for (int i = 0; i < n; i++)
    {
        int rem = num % 10;
        int mul = 1;
        for (int j = 0; j < n; j++)
        {
            mul *= rem;
            cout << mul << endl;
        }
        ans += mul;
        cout << ans << endl;
        num /= 10;
    }
    if (ans == comp)
    {
        b = true;
    }

    return b;
}

int main()
{
    cout << armstrong(154) << endl;
    return 0;
}