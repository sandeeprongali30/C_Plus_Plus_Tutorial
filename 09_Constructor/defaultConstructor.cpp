#include <iostream>
#include <vector>

using namespace std;

class Chai
{

public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // Members Function
    void displayChaiDetails()
    {
        cout << "Name of Tea is " << teaName << endl;
        cout << "Number of Serving is " << servings << endl;
        cout << "Ingredients involved are ";
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
    }

    // Default Constructor
    Chai()
    {
        teaName = "Green Tea";
        servings = 5;
        ingredients = {"Water", "TeaLeaf", "Honey"};
        cout << "Calling Default Constructor" << endl;
    }
};

int main()
{
    Chai chai;
    chai.displayChaiDetails();
    cout << chai.servings;
    return 0;
}