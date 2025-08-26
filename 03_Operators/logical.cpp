#include <iostream>

using namespace std;

int main()
{
    bool isStudent;
    int cups;

    cout << "Are you a Student (1 for yes and 0 for No) ?\n";
    cin >> isStudent;
    cout << "How many cups do you have?\n";
    cin >> cups;
    if (isStudent || cups > 15)
    {
        cout << "You are Eligible for a Discount!\n";
    }
    else
    {
        cout << "Sorry, You are not eligible for a discount :(\n";
    }
}