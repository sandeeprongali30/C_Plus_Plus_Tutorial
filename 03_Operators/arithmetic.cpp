#include <iostream>

using namespace std;

int main()
{
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of Tea Cups: ";
    cin >> cups;
    cout << "Enter the price per cup: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    if (totalPrice > 100)
    {
        discountedPrice = totalPrice * 0.95;
        cout << "Discounted price of tea is: " << discountedPrice << endl;
    }
    else
    {
        cout << "Total price of tea is: " << totalPrice << endl;
    }
    return 0;
}