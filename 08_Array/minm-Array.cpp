#include <iostream>

using namespace std;

int main()
{
    int num[] = {5, 12, 22, 1, -15, 24};
    cout << "Size of num: " << sizeof(num) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    int n = sizeof(num) / sizeof(num[0]);
    cout << "Length of Array is: " << n << endl;
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (num[i] < smallest)
        // {
        //     smallest = num[i];
        // }
        smallest = min(num[i], smallest);
    }
    cout << "Smallest No is: " << smallest << endl;
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // if (num[i] > largest)
        // {
        //     largest = num[i];
        // }
        largest = max(num[i], largest);
    }
    cout << "Largest No is: " << largest << endl;

    return 0;
}