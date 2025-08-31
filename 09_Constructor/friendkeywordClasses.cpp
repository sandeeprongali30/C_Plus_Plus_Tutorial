#include <iostream>

using namespace std;

class Sandeep
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    Sandeep()
    {
        private_variable = 10;
        protected_variable = 99;
        cout << "Calling Default Constructor" << endl;
    }
    friend class Rongali;
};

class Rongali
{
public:
    void display(Sandeep &sandeep)
    {
        cout << "The value of Private Variable = " << sandeep.private_variable << endl;
        cout << "The value of Protected Variable = " << sandeep.protected_variable << endl;
    }
};

int main()
{
    Sandeep sandeep;
    Rongali rongali;
    rongali.display(sandeep);
    return 0;
}