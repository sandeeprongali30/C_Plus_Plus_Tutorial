#include <iostream>
#include <string>

using namespace std;

int main()
{
    string teaOrder;
    cout << "Enter your Tea Order: ";
    getline(cin, teaOrder);
    if (teaOrder == "Lemon Tea")
    {
        cout << "The Type of Tea is Lemon Tea\n";
    }
    return 0;
}