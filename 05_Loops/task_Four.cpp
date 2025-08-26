#include <iostream>
#include <string>

using namespace std;

int main()
{
    string response;
    while (true)
    {
        cout << "Do you want more tea? (Type 'stop' to exit): ";
        getline(cin, response);
        if (response == "stop")
        {
            break;
        }
    }
    cout << "No more tea will be served to you" << endl;

    return 0;
}