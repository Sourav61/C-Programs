#include <iostream>
using namespace std;

class Student
{
    string name;

public:
    int age;
    bool gender;

    void setName(string s)
    {
        name = s;
    }

    Student()
    {
        cout << "Default Constructor" << endl;
    } // default constructor

    Student(string s, int b, int c)
    {
        cout << "Parameterised Constructor" << endl;
        name = s;
        age = b;
        gender = c;
    } // parameterised constructor

    Student(Student &a)
    {
        cout << "Copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~Student()
    {
        cout << "Desctructor called" << endl;
    }

    bool operator==(Student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }

    void printInfo()
    {
        cout << "Name of the student is: " << name << ",and is: " << age << " years old and is a " << (gender == 1 ? "Male" : "Female") << endl;
    }
};

int main()
{

    // Student a;
    // a.name = "Sourav";
    // a.age = 18;
    // a.gender = 1;

    // cout << a.name << " " << a.age << " " << a.gender << endl;

    // int n;
    // cout << "Enter the number of entries: " << endl;
    // cin >> n;

    // Student a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     // cout << "Please enter name of the student: " << endl;
    //     // cin >> a[i].name;

    //     string s;
    //     cout << "Please enter name of the student: " << endl;
    //     cin >> s;

    //     a[i].setName(s);

    //     cout << "Please enter age of the student: " << endl;
    //     cin >> a[i].age;
    //     cout << "Please enter gender of the student: " << endl;
    //     cin >> a[i].gender;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     a[i].printInfo();
    // }

    Student a("Sourav", 18, 1);

    // a.printInfo();

    Student b("sourav", 18, 1);

    Student c = a;

    if (b == a)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Different" << endl;
    }

    return 0;
}
