#include <iostream>

using namespace std;

int *prepareChaiOrders(int cups)
{
    int *orders = new int[cups];
    for (int i = 0; i < cups; i++)
    {
        orders[i] = (i + 1) * 10;
    }
    cout << orders << endl;
    return orders;
}

int main()
{
    int cups = 5;
    int *reference = prepareChaiOrders(cups);
    for (int i = 0; i < cups; i++)
    {
        cout << "Cup: " << i + 1 << " has value " << reference[i] << endl;
    }

    cout << "Output 1: " << reference[2] << endl;
    delete[] reference; // Deleting from the heap/dynamic memory
    cout << "Output 2: " << reference[2] << endl;

    return 0;
}