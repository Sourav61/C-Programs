#include <iostream>
#include <bitset>
using namespace std;

int getBit(int n, int pos)
{
    if (n & (1 << pos) != 0)
    {
        cout << "The bit present at the position " << pos << " in the given number is 1." << endl;
    }
    else
    {
        cout << "The bit present at the position " << pos << " in the given number is 0." << endl;
    }

    return 0;
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);

    return (n & mask);
}

int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);

    n = n & mask;

    return (n | (value << pos));
}

int main()
{
    int n, pos, value;
    cout << "Enter any number: " << endl;
    cin >> n;

    // Print binary representation of number using bitset library.=====================================================

    // char a = 58;
    // bitset<8> x(a);

    // cout << x << endl;

    // Check bit at any location=====================================================

    // cout << "Enter the position at which you to check bit: " << endl;
    // cin >> pos;

    // getBit(n, pos);

    // Set bit at any location=====================================================

    // cout << "Enter the position at which you to set bit: " << endl;
    // cin >> pos;

    // cout << "After setting bit at position " << pos << " in the number " << n << " , it becomes: " << setBit(n, pos);

    // Clear bit at any location=====================================================

    // cout << "Enter the position at which you to clear bit: " << endl;
    // cin >> pos;

    // cout << "After clearing bit at position " << pos << " in the number " << n << " , it becomes: " << clearBit(n, pos);

    // Update bit at any location=====================================================

    cout << "Enter the position at which you to update bit: " << endl;
    cin >> pos;

    cout << "Enter the value of updated bit: " << endl;
    cin >> value;

    cout << "After clearing bit at position " << pos << " in the number " << n << " , it becomes: " << updateBit(n, pos, value);

    return 0;
}