#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // Deligation Constructor
    Chai(string name) : Chai(name, 1, {"Water", "Tea Leaf"}) {}

    // Main Constructor
    Chai(string name, int serve, vector<string> ingr)
    {
        this->teaName = name;
        this->servings = serve;
        this->ingredients = ingr;
        cout << "Main Constructor Called" << endl;
    }

    // Member Function
    void displayChaiDetails()
    {
        cout << "The Type of Tea is " << teaName << endl;
        cout << "The Number of Servings is " << servings << endl;
        cout << "The Ingredients of Tea are: " << endl;
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
        cout << "\n";
    }
};

int main()
{
    Chai quickChai("Quick Chai");
    quickChai.displayChaiDetails();
    return 0;
}