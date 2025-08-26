#include <iostream>

using namespace std;

int main()
{
    int cups;
    cout << "Enter the no of Cups you have: ";
    cin >> cups;
    if (cups > 20)
    {
        cout << "You have earned a GOLDEN Badge\n";
    }
    else if (cups >= 10 && cups <= 20)
    {
        cout << "You have earned a SILVER Badge\n";
    }
    else
    {
        cout << "Sorry! No Badge for you :(\n";
    }
    return 0;
}