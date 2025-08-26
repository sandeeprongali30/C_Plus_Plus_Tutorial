#include <iostream>

using namespace std;

int checkTemperature(int temp)
{
    return temp;
}
// Declaration of Function
void serveChai(int cups);

void makeChai()
{
    cout << "Boling Water, Adding Tea Leaves, Straining...\n";
}

void serveChai(string cups = "Sandeep")
{
    cout << "String - No of Chai to be served is " << cups << endl;
}

// void serveChai(int cups)
// {
//     cout << "No of Chai to be served is " << cups << endl;
// }

int main()
{
    int temperature = checkTemperature(35);
    cout << "The Temperature is: " << temperature << endl;
    // serveChai(40); Linker Command will fail with exit code 1 if definition of function is not avaialable.
    serveChai(40);
    serveChai();
    makeChai();
    return 0;
}

// Definition of Function
void serveChai(int cups)
{
    cout << "No of Chai to be served is " << cups << endl;
}