#include <iostream>

using namespace std;

int main()
{
    float teaPrice = 49.99;
    int roundedTeaPrice = (int)teaPrice;

    int teaQuantity = 8;
    float totalFloatPrice = teaQuantity * teaPrice;
    int totalIntPrice = teaQuantity * teaPrice;
    cout << teaPrice << endl;
    cout << roundedTeaPrice << endl;
    cout << totalFloatPrice << endl;
    cout << totalIntPrice << endl;
    return 0;
}