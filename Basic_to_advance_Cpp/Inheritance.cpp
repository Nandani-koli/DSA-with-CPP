// "Inheritance"
// - It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

// To inherit from a class, use the : symbol
// derived class (child) - the class that inherits from another class
// base class (parent) - the class being inherited from

#include <iostream>
using namespace std;

class Parent {
private:
    string name;
    string surname;
    int age;
public:
    Parent(string pname, string psurname, int page){
        // cout<<"I'm Parent"<<endl;
        name = pname;
        surname = psurname;
        age = page;
    };
    // void set(string pname, string psurname, int page){
    //     name = pname;
    //     surname = psurname;
    //     age = page;
    // }
    void get(){
        cout<<"Name:-"<<name<<endl;
        cout<<"Surname:-"<<surname<<endl;
        cout<<"age:- "<<age<<endl;
    }
};

class child : public Parent {
    private :
    string school;
    public :
    child(string cname, string csurname,int cage): Parent(cname, csurname,cage){
        // cout<<"I'm Child\n";
    };
    void studyTime()
    {
        cout<<"TIme for study"<<endl;
    }
};

// Multilevel Inheritance
// A class can also be derived from one class, which is already derived from another class.

// In the following example, MyGrandChild is derived from class MyChild (which is derived from MyClass).

class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};
// Derived class (child)
class MyChild: public MyClass {
};
// Derived class (grandchild)
class MyGrandChild: public MyChild {
};


// Multiple Inheritance
// A class can also be derived from more than one base class, using a comma-separated list:

// Base class
class MyClass2 {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass2, public MyOtherClass {
};

int main(){

    // Parent P1();
    child  c("nandani","koli",90);
    // child c1;
    // c1.set("nandani","koli",90);
    c.get();

    MyGrandChild grandChild;
    grandChild.myFunction();

    MyChildClass Childclass;
    Childclass.myFunction();
    Childclass.myOtherFunction();

}


