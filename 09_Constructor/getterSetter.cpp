#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai
{
private:
    string teaName;
    int servings;
    vector<string> ingredients;

public:
    Chai()
    {
        teaName = "Unknown Tea";
        servings = 10;
        ingredients = {"Water", "TeaLeaf", "Honey"};
        cout << "Default Constructor";
    }

    Chai(string name, int serve, vector<string> ingr)
    {
        this->teaName = name;
        this->servings = serve;
        this->ingredients = ingr;
        cout << "Parameterized Constructor";
    }
    // For Controlled Access
    //  Getter
    string getTeaName()
    {
        return teaName;
    }

    int getServings()
    {
        return servings;
    }
    vector<string> getIngredients()
    {
        return ingredients;
    }

    // Setter
    void setTeaName(string name)
    {
        // logic
        teaName = name;
    }

    void setServings(int serve)
    {
        servings = serve + 2;
    }

    void setIngredients(vector<string> ingr)
    {
        ingredients = ingr;
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
    Chai chai;
    chai.displayChaiDetails();
    cout << chai.getTeaName() << endl;
    chai.setTeaName("Lemon Tea");
    cout << chai.getServings() << endl;
    chai.setServings(20);
    chai.setIngredients({"Lemon", "Hot Water", "TeaLeaf", "Honey"});
    chai.displayChaiDetails();

    return 0;
}