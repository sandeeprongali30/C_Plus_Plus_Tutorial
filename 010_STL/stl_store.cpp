#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Product
{
    int productId;
    string name;
    string category;
};

struct Order
{
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderDate;
};

int main()
{
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"}};

    deque<string> recentCustomers = {"C001", "C002", "C003"};
    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 3, "C003", time(0)});
    return 0;
}
