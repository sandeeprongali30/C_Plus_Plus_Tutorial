#include <iostream>
#include <string>

using namespace std;

class Tea
{
public:
    virtual void prepareIngredients() = 0; // Pure Virtual Function
    virtual void brew() = 0;
    virtual void serve() = 0;

    void makeTea()
    {
        prepareIngredients();
        brew();
        serve();
    }
};

// Derived Class
class GreenTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Green Leaf and Water is Ready" << endl;
    }

    void brew() override
    {
        cout << "Green Tea Brewed" << endl;
    }

    void serve() override
    {
        cout << "Green Tea Served" << endl;
    }
};

// Second Derived Class
class MasalaTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Tea Leaf and Water is Ready with Masala" << endl;
    }

    void brew() override
    {
        cout << "Masala Tea Brewed" << endl;
    }

    void serve() override
    {
        cout << "Masala Tea Served" << endl;
    }
};

int main()
{
    GreenTea greenTea;
    MasalaTea masalaTea;
    greenTea.makeTea();
    masalaTea.makeTea();
    return 0;
}