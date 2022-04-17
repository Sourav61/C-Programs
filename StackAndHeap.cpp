#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = new int();
    *p = 10;
    cout << "The memory address allocated in heap is: " << p << endl;
    cout << "The integer stored at " << p << " memory address is: " << *p << endl;

    delete (p);

    // After deleting p from heap, pointer is still present trying to point at memory location that has already been deleted. This pointer is known as dangling pointer.

    // To avoid dangling pointer, either we can reassign it to point to some other memory location or we have to delete pointer from stack i.e. terminate the program.

    p = new int[4];

    delete[] p;
    p = NULL;

    return 0;
}