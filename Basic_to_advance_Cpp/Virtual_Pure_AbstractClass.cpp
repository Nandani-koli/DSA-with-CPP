//Virtual function, Pure virtual function and Abstract Class
// Abstraction means displaying only essential information and hiding the details.
#include <bits/stdc++.h>
using namespace std;
//Branch Class is an Abstract Class because it has atleast one pure virtual Function 
class Branch
{
public:
    //virtal Function of base class 
    virtual void announcement(){
        cout<<"Notice for all branches "<<endl;
    }
    virtual void test() = 0;        //pure virtual function 
};

class IT : public Branch{
    public:
    void announcement(){
        cout<<"Notice for IT branch"<<endl;
    }
    //implementation of pure virtual function in derived class is mandotary
    void test(){
        cout<<"test for It branch..."<<endl;
    }
};

class CS : public Branch{
    public:
    //implementation of pure virtual function in derived class is mandotary
        void test(){
            cout<<"Test for CS branch..."<<endl;
        }
};
int main()
{
    //pointer of type base class(branch) can point derived class
    Branch * B1 = new IT();
    // B1->announcement();
    Branch * B2 = new CS();
    // B2->test();

    Branch *branch[2] = {B1, B2};
    for(int i = 0; i<2; i++){
        branch[i]->test();
    }
    return 0;
}