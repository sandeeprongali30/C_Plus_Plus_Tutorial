#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userTea;
    int teaQuantity;

    cout << "What would you like to have? \n";
    getline(cin, userTea);
    cout << "How many cup of " << userTea << " would you like to have? \n";
    cin >> teaQuantity;
    cout << userTea << endl;
    cout << teaQuantity << endl;
}