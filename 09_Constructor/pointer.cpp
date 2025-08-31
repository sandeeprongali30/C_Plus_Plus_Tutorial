#include <iostream>  // for cout
using namespace std; // so we can just write cout

int main()
{
    int x = 42;
    int *ptr = &x; // pointer storing the address of x

    cout << "Value of x: " << x << endl;      // prints 42
    cout << "Address of x: " << &x << endl;   // prints memory address of x - You use & to get the address of a variable.
    cout << "Pointer ptr: " << ptr << endl;   // also prints address of x
    cout << "Value at ptr: " << *ptr << endl; // prints 42 (dereferencing) - You use * (dereference) to access the value at that address.
    cout << "Value at ptr: " << &ptr << endl; // prints memory address of ptr

    return 0;
}
