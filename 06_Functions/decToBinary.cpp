#include <iostream>

using namespace std;

int decToBinary(int num)
{
    int rem = 0;
    int pow = 1;
    int binary = 0;
    while (num > 0)
    {
        rem = num % 2;
        num /= 2;
        binary += (rem * pow);
        pow *= 10;
    }
    return binary;
}

string decToBinaryS(int num)
{
    string str = "";
    while (num > 0)
    {
        str = char((num % 2) + '0') + str;
        num /= 2;
    }
    return str;
}

int main()
{

    int n = 1024;
    cout << "Binary for this number is: " << decToBinary(n) << endl;
    cout << "Binary for this number is: " << decToBinaryS(n) << endl;
    return 0;
}