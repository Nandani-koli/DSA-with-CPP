#include<iostream>
using namespace std;

// Access specifiers define how the members (attributes and methods) of a class can be accessed.

// public -> members are accessible from outside the class
// private -> members cannot be accessed (or viewed) from outside the class
// protected -> members cannot be accessed from outside the class, however, they can be accessed in inherited classes. 

// By default, all members of a class are private if you don't specify an access specifier:

class AccessSpecifiers
{
private:
    int price;
    int name;
    string address;
public:
    void AccessSpecifiers();
protected:
    int sum(inta, int b);
};
