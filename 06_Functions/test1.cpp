#include <iostream>

using namespace std;

int numberSum(int num)
{
    int remainder = 0;
    int sum = 0;
    while (num > 0)
    {
        remainder = num % 10;
        num /= 10;
        sum += remainder;
    }
    return sum;
}

int length(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num = num / 10;
        // if (num > 0)
        // {
        //     count++;
        // }
    }
    return count;
}

int binomialCoefficient(int n, int r)
{
    int numer = 1;
    int denom = 1;
    for (int i = (n - r) + 1; i <= n; i++)
    {
        numer *= i;
    }

    for (int i = 1; i <= r; i++)
    {
        denom *= i;
    }

    int ans = numer / denom;

    return ans;
}

int main()
{
    int n = 1234;
    int len = length(n);
    cout << "Length of No is: " << len << endl;
    cout << "Sum of digits of No is: " << numberSum(n) << endl;
    cout << "Binomial Coefficient is: " << binomialCoefficient(6, 3) << endl;

    return 0;
}