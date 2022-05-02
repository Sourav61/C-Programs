#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // using normal method

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }

    // using iterator

    // vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // using auto keyword

    // for (auto i : v)
    // {
    //     cout << i << endl;
    // }

    // v.pop_back();

    vector<int> v2(3, 50);

    swap(v, v2);

    for (auto i : v)
    {
        cout << i << endl;
    }

    for (auto i : v2)
    {
        cout << i << endl;
    }

    return 0;
}