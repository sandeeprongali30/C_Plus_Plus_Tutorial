#include <iostream>

using namespace std;

bool isPowerOfTwo(int num)
{
    return num > 0 && (num & (num - 1)) == 0;
}
// bool isPowerOfTwo(int num)
// {
//     return num > 0 && ((num >> 1) << 1) == num;
// }

int main()
{
    int num = 12;
    cout << (isPowerOfTwo(num) ? "True" : "False") << endl;
    return 0;
}