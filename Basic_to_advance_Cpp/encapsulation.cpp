#include <iostream>
using namespace std;

// Encapsulation, 
// is to make sure that "sensitive" data is hidden from users. 
//To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). 
//If you want others to read or modify the value of a private member, you can provide public get and set methods.

class Employees{
    private:
        string userName;
        int password;
    public:
        void set(string ename, int epass){
            name = ename;
            password = epass;
        }
        void get(){
            cout<<name<<endl;
            cout<<password<<endl;
        }
};

int main()
{
    Employees ep1;
    ep1.set("Nandani",6789);
    ep1.get();
}