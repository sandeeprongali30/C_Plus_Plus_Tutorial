#include <iostream>

using namespace std;

int totalChaiServed(int chai[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += chai[i];
    }

    return total;
}

int main()
{
    int chaiTemperature[5] = {85, 90, 88, 92, 89};
    cout << "Chai Temperature: ";
    for (int i = 0; i < 5; i++)
    {
        cout << chaiTemperature[i] << " ";
    }
    cout << "\n";

    int chaiServed[7] = {85, 90, 88, 92, 89, 78, 82};
    int total = totalChaiServed(chaiServed, 7);
    cout << total << endl;

    return 0;
}