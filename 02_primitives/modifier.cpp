#include <iostream>

using namespace std;

int main()
{
    int smallTeaPack = -100;
    unsigned smallTeaPackUnsigned = -100;
    long longExample = 1000000000;
    long long longLongExample = 1000000000000;
    short shortExample = 25;
    cout << smallTeaPack << endl;
    cout << smallTeaPackUnsigned << endl; // Will give garbage value if signed
    cout << longExample << endl;
    cout << longLongExample << endl;
    cout << shortExample << endl;

    return 0;
}