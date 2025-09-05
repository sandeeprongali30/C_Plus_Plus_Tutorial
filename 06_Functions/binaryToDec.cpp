#include <iostream>

using namespace std;

int binaryToDec(int num)
{
    int pow = 1;
    int dec = 0;
    while (num > 0)
    {
        int rem = num % 10;
        dec += (rem * pow);
        num /= 10;
        pow *= 2;
    }
    return dec;
}

int main()
{
    int n = 101010;
    cout << "Binary to Decimal for " << n << " is " << binaryToDec(n) << endl;
    return 0;
}