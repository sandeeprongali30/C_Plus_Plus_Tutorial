#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // Member Function
    void displayChaiDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Tea Servings: " << servings << endl;
        cout << "Tea Ingredients: ";
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
    }
};

int main()
{
    Chai chai;
    chai.teaName = "Lemon Tea";
    chai.servings = 5;
    chai.ingredients = {"Lemon", "TeaLeaf", "Water", "Sugar"};
    chai.displayChaiDetails();

    Chai chai1;
    chai1.teaName = "Green Tea";
    chai1.servings = 8;
    chai1.ingredients = {"Honey", "TeaLeaf", "Water", "Sugar"};
    chai1.displayChaiDetails();
    return 0;
}