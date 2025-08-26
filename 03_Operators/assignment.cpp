#include <iostream>

using namespace std;

int main()
{
    int teaBags;
    cout << "Enter the No of Tea Bags you have: ";
    cin >> teaBags;
    if (teaBags < 10)
    {
        teaBags += 5;
    }
    cout << "Updated no of teabags is: " << teaBags << endl;
    return 0;
}
