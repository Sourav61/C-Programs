#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<string, int> ourmap;
    pair<string, int> p("abc", 1);
    ourmap.insert(p);

    ourmap["def"] = 2;

    cout << ourmap["abc"] << endl;
    cout << ourmap.at("def") << endl;

    // .at() method returns an error when searching for something that is not present in the map

    // cout << ourmap.at("ghi") << endl;

    cout << "Size before insertion: " << ourmap.size() << endl;

    // when trying to access value in hashmap in similar way as of an array, if element is not already present then it gets added and is assigned a value 0

    cout << ourmap["ghi"] << endl;

    cout << "Size after inesertion: " << ourmap.size() << endl;

    // cout << ourmap["klm"] << endl;

    // To Check Presence of element in our map

    if (ourmap.count("ghi") > 0)
    {
        cout << "ghi is present" << endl;
    }

    ourmap.erase("ghi");

    if (ourmap.count("ghi") > 0)
    {
        cout << "ghi is present" << endl;
    }

    cout << "Size after erasing: " << ourmap.size() << endl;

    return 0;
}