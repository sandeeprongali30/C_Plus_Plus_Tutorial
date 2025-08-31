#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Chai
{
private:
    string teaName;
    int servings;

public:
    Chai(string name, int serve) : teaName(name), servings(serve) {}
    void display() const
    {
        cout << "Tea Name: " << teaName << endl;
    }

    // Friend Function Exposed
    // friend bool compareServings(const Chai &chai1, const Chai &chai2);
    friend bool compareServings(const Chai chai1, const Chai chai2);
};

// bool compareServings(const Chai &chai1, const Chai &chai2)
// {
//     return chai1.servings > chai2.servings;
// }

bool compareServings(const Chai chai1, const Chai chai2)
{
    return chai1.servings > chai2.servings;
}

int main()
{
    Chai masalaChai("Masala Chai", 10);
    Chai gingerChai("Ginger Chai", 20);
    masalaChai.display();
    gingerChai.display();

    if (compareServings(masalaChai, gingerChai))
    {
        cout << "Masala Chai is having MORE Servings" << endl;
    }
    else
    {
        cout << "Masala Chai is having LESS Servings" << endl;
    }

    return 0;
}