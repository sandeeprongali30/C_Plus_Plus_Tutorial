#include <iostream>

using namespace std;

int main()
{
    int teaCups;
    cout << "Enter the total no of Cups you have: ";
    cin >> teaCups;

    while (teaCups > 0)
    {
        teaCups--;
        cout << "This is your Tea\n"
             << teaCups << " cups of tea remaining" << endl;
    }
    cout << "All teas are sold!" << endl;
    return 0;
}