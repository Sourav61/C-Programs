// Implementation of Pointers

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cout << "Enter the first number: "
         << " ";
    cin >> a;

    cout << "Enter the second number : "
         << " ";
    cin >> b;

    // int *aptr = &a, *bptr = &b;

    // swap(aptr, bptr);

    swap(&a, &b);

    cout << "After the swapping of two variables using pointers, variables become: " << a << " and " << b << endl;
}
