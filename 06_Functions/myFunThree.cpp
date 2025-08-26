#include <iostream>

using namespace std;

int main()
{
    // Lambda
    auto preparedChai = [](int cups)
    {
        cout << "Preparing " << cups << " cups of tea" << endl;
    };
    preparedChai(5);
}