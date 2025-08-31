#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Chai
{
public:
    string *teaName; // Pointer to a string (tea name stored dynamically on heap)
    int servings;
    vector<string> ingredients;

    Chai(string name, int serve, vector<string> ingr)
    {
        this->teaName = new string(name); // Dynamically Allocating Heap Memory - Its your responsibility to cleanup the used memory.
        this->servings = serve;
        this->ingredients = ingr;
        cout << "Parameterized Constructor Called..." << endl;
    }

    // Copy Constructor Called
    Chai(const Chai &deepCopied)
    {
        teaName = new string(*deepCopied.teaName);
        servings = deepCopied.servings;
        ingredients = deepCopied.ingredients;
        cout << "Copy Constructor Called..." << endl;
    }

    // Destructor Initialized
    ~Chai()
    {
        delete teaName;
        cout << "Destructor Called..." << endl;
    }

    // Member Function
    void displayChaiDetails()
    {
        cout << "The Type of Tea is " << *teaName << endl;
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
    Chai chai("Lemon Tea", 8, {"Water", "TeaLeaf", "Honey"});
    cout << "------Normal Display Message------" << endl;
    chai.displayChaiDetails();
    // Copying Object
    cout << "------Copying Object------" << endl;
    Chai copiedChai = chai;
    cout << "------Copied Object------" << endl;
    *chai.teaName = "Modified Lemon Tea";
    cout << "First Object" << endl;
    cout << chai.teaName << endl;
    cout << "Second Copied Object" << endl;
    cout << copiedChai.teaName << endl;
    return 0;
}