// Single        	One derived class inherits from one base class.	          Parent → Child
// Multiple      	One derived class inherits from multiple base classes.	  Parent1 + Parent2 → Child
// Multilevel	    Derived from another derived class.	                      Grandparent → Parent → Child
// Hierarchical  	Multiple classes inherit from one base class.	          Parent → Child1, Child2
// Hybrid	        Combines multiple types of inheritance.	                  Mix of above types

#include <iostream>
using namespace std;

class ParentClass
{
    // making it protected means only derived class or within the class, it can be accessed
protected:
    int addition(int a, int b)
    {
        return a + b;
    }
    int subtraction(int a, int b)
    {
        return a - b;
    }
};

class ChildClassA : protected ParentClass
{
public:
    // Print the reult
    void print()
    {
        int a, b;
        cout << "Enter two numbers for addition" << endl;
        cin >> a >> b;
        int res = addition(a, b);
        cout << "Addition Result : " << res << endl;
    }
};

class ChildClassB : protected ParentClass
{
public:
    // Print the reult
    void print()
    {
        int a, b;
        cout << "Enter two numbers for subtraction" << endl;
        cin >> a >> b;
        int res = subtraction(a, b);
        cout << "Subtraction Result : " << res << endl;
    }
};

int main()
{
    int option;
    cout << "What operation would you like to perform?\n"
         << "1. Addition\n"
         << "2. Subtraction" << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        ChildClassA add;
        add.print();
        break;
    case 2:
        ChildClassB sub;
        sub.print();
        break;

    default:
        cout << "Wrong choice"
             << endl;
        break;
    }
}
