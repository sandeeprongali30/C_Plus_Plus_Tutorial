#include <iostream>

using namespace std;

int main()
{
    cout << "======Bitwise Operator Example======" << endl;
    cout << "Bitwise AND (&) Operator: a = 4, b = 8 ==> " << (4 & 8) << endl;
    cout << "Bitwise OR (|) Operator: a = 4, b = 8 ==> " << (4 | 8) << endl;
    cout << "Bitwise XOR (^ Exclusice OR) Operator: a = 4, b = 8 ==> " << (4 ^ 8) << endl;
    cout << "Bitwise XOR (^ Exclusice OR) Operator: a = 3, b = 7 ==> " << (3 ^ 7) << endl;
    cout << "Bitwise Left Shift (<<) Operator: (n << i) n = 10, i = 2 (Mathematically ans = n * 2^i) ==> " << (10 << 2) << endl;
    cout << "Bitwise Right Shift (>>) Operator: (n >> i) n = 10, i = 2 (Mathematically ans = n / 2^i)==> " << (10 >> 2) << endl;
}