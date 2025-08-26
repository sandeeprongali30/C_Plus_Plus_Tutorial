#include <iostream>
#include <string>

using namespace std;

int main()
{
    string responses;
    do
    {
        cout << "Do you want Tea (Yes/No): ";
        getline(cin, responses);
    } while (responses != "No" && responses != "no");
    return 0;
}