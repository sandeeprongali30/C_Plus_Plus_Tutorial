#include <iostream>
#include <string>
#include <vector>

// using namespace std;

class Chai
{
public:
    std::string teaName;
    int servings;
    std::vector<std::string> ingredients;

    Chai(std::string name, int serve, std::vector<std::string> ingr)
    {
        this->teaName = name;
        this->servings = serve;
        this->ingredients = ingr;
        std::cout << "This is Parameterized Constructor" << std::endl;
    }
    // Members Function
    void displayChaiDetails()
    {
        std::cout << "Name of Tea is " << teaName << std::endl;
        std::cout << "Number of Serving is " << servings << std::endl;
        std::cout << "Ingredients involved are ";
        for (std::string ingredient : ingredients)
        {
            std::cout << ingredient << " ";
        }
        std::cout << "\n";
    }
};

// class Chai
// {
// public:
//     std::string teaName;
//     int servings;
//     std::vector<std::string> ingredients;

//     Chai(std::string name, int serve, std::vector<std::string> ingr)
//     {
//         teaName = name;
//         servings = serve;
//         ingredients = ingr;
//         std::cout << "This is Parameterized Constructor" << std::endl;
//     }
//     // Members Function
//     void displayChaiDetails()
//     {
//         std::cout << "Name of Tea is " << teaName << std::endl;
//         std::cout << "Number of Serving is " << servings << std::endl;
//         std::cout << "Ingredients involved are ";
//         for (std::string ingredient : ingredients)
//         {
//             std::cout << ingredient << " ";
//         }
//         std::cout << "\n";
//     }
// };

int main()
{
    // Chai chai();
    Chai chai("Lemon Tea", 8, {"Water", "TeaLeaf", "Honey"});
    chai.displayChaiDetails();
    return 0;
}
