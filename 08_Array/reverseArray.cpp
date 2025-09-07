#include <iostream>
#include <map>

using namespace std;

map<int, int> duplicateElement(int arr[], int n)
{
    map<int, int> myMap = {};
    for (int i = 0; i < n; i++)
    {
        if (myMap.find(arr[i]) == myMap.end())
        {
            myMap[arr[i]] = 1;
        }
        else
        {
            myMap[arr[i]] += 1;
        }
    }
    return myMap;
}

void reverseArray(int num[], int n) // Two Pointers Approach
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(num[start], num[end]);
        start++;
        end--;
    }
}

int main()
{
    // int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int arr[] = {1, 2, 3, 1, 2, 4, 5, 6, 5, 1, 5, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < n / 2; i++)
    // {
    //     int temp = 0;
    //     temp = arr[i];
    //     arr[i] = arr[n - i - 1];
    //     arr[n - i - 1] = temp;
    // }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    // ======1. auto &entry → reference======
    // entry is a reference to each element inside the container (e.g., a std::pair<const int,int>& if it’s a map<int,int>).
    // No new copy is made.
    // You can modify the element inside the container:
    // entry.second += 1;  // actually changes the map value
    // Best when:
    // Elements are large/heavy objects (avoid copying overhead).
    // You might want to modify them in place.
    for (auto &entry : duplicateElement(arr, n))
    {
        cout << entry.first << "=>" << entry.second << endl;
    }
    // ======2. auto entry1 → copy======
    // entry1 is a copy of each element (e.g., a fresh std::pair<int,int>).
    // The original container elements remain unchanged.
    // More overhead (especially if elements are large objects).
    // You cannot modify the container through entry1, since you’re only editing a local copy.
    // Example:
    // entry1.second += 1;  // modifies the copy, NOT the map
    for (auto entry1 : duplicateElement(arr, n))
    {
        cout << entry1.first << " => " << entry1.second << endl;
    }
    // Use structured bindings (C++17+)
    for (auto [key, value] : duplicateElement(arr, n))
    {
        cout << key << " ==> " << value << endl;
    }

    return 0;
}