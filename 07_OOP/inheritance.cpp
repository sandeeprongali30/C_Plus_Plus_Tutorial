#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Main/Original/Parent/Base Class
class Tea
{
protected:
    string teaName;
    int servings;

public:
    Tea(string name, int serve) : teaName(name), servings(serve)
    {
        cout << "======Tea Constructor Called for " << teaName << "======" << endl;
    }

    virtual void brew() const
    {
        cout << "Brewing " << teaName << " with generic method..." << endl;
    }

    virtual void serve() const
    {
        cout << "Serving " << servings << " Number of Tea with generic method..." << endl;
    }

    virtual void feedback() const
    {
        cout << "Feedback from Tea customer with generic method..." << endl;
    }

    virtual ~Tea()
    {
        cout << "======Destructor called for " << teaName << " Base class======" << endl;
    }
};

class GreenTea : public Tea
{
public:
    GreenTea(int serve) : Tea("Green Tea", serve)
    {
        cout << "======" << teaName << " Constructor Called======" << endl;
    }

    void brew() const override
    {
        cout << "Brewing " << teaName << " by steepin Green Tea Leaf....." << endl;
    }

    void serve() const override
    {
        cout << "Serving " << servings << " Number of " << teaName << "....." << endl;
    }

    void feedback() const override
    {
        cout << "Feedback from Tea customer with Green Tea..." << endl;
    }

    ~GreenTea()
    {
        cout << "======Destructor Called for " << teaName << "======" << endl;
    }
};

class MasalaTea : public Tea
{
public:
    MasalaTea(int serve) : Tea("Masala Tea", serve)
    {
        cout << "======" << teaName << " Constructor Called======" << endl;
    }

    void brew() const override final
    {
        cout << "Brewing " << teaName << " by Adding Spices and Milk....." << endl;
    }

    void serve() const override
    {
        cout << "Serving " << servings << " Number of " << teaName << "....." << endl;
    }

    ~MasalaTea()
    {
        cout << "======Destructor Called for " << teaName << "======" << endl;
    }
};

class ModifiedMasalaTea : public MasalaTea
{
public:
    ModifiedMasalaTea(int serve) : MasalaTea(serve)
    {
        cout << "======Modified " << teaName << " Constructor Called======" << endl;
    }

    // void brew() const override // cannot override 'final' function "MasalaTea::brew"
    // {
    //     cout << "Brewing " << teaName << " by Adding Modified Spices and Milk....." << endl;
    // }

    ~ModifiedMasalaTea()
    {
        cout << "======Destructor Called for Modified " << teaName << "======" << endl;
    }
};

int main()
{
    cout << "---------------------------------------------------------" << endl;

    // Pointer to an Object
    Tea *tea1 = new GreenTea(2);
    Tea *tea2 = new MasalaTea(3);
    Tea *tea3 = new ModifiedMasalaTea(4);

    // Tea tea1 = new GreenTea(2); //no suitable constructor exists to convert from "GreenTea *" to "Tea"
    // Tea tea2 = new MasalaTea(3); //no suitable constructor exists to convert from "MasalaTea *" to "Tea"
    // Tea tea3 = new ModifiedMasalaTea(4); //no suitable constructor exists to convert from "ModifiedMasalaTea *" to "Tea"

    // Object
    // GreenTea gt(10);
    // MasalaTea mt(20);
    // ModifiedMasalaTea mmt(30);

    cout << "=========================================================" << endl;

    // Pointer to an Object
    tea1->brew(); // Arrow Operator - Access Members (Methods or Variables) of an Object through a Pointer
    tea1->serve();
    tea1->feedback();

    // Object
    // gt.brew(); // Dot Operator Because gt is an Object
    // gt.serve();
    // gt.feedback();

    cout << "---------------------------------------------------------" << endl;

    tea2->brew();
    tea2->serve();
    tea2->feedback();

    // mt.brew();
    // mt.serve();
    // mt.feedback();

    cout << "---------------------------------------------------------" << endl;

    // mmt.brew();
    // mmt.serve();
    // mmt.feedback();

    tea3->brew();
    tea3->serve();
    tea3->feedback();

    cout << "=========================================================" << endl;

    delete tea1;
    delete tea2;
    delete tea3;

    cout << "---------------------------------------------------------" << endl;

    return 0;
}