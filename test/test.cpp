#include <iostream>
#include <string>

using namespace std;

int main()
{
    for (int i = 1, j = 1; i < 8; j = j * 10, i++)
    {
        cout << j << endl;
    }
    string star = "*";
    for (int i = 0; i < 10; star = star + "*", i++)
    {
        cout << star << endl;
    }
}