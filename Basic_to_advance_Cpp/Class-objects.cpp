#include <iostream>
#include <list>
using namespace std;
// a class is a template for objects, and an object is an instance of a class.
class Students{
public:             //access specifier
    string name;            //Attributes
    string branch;
    int age;
    int rollno;
    list<int> marks;
};
int main(){

    Students st;  //st is object of class Student type
    st.name = "nandini";
    st.age =18;
    st.branch = "IT";
    st.rollno = 203;
    st.marks ={78,89,99,69,87};

    cout<<"Name :- "<<st.name<<endl;
    cout<<"Roll no:- "<<st.rollno<<endl;
    cout<<"Age :- "<<st.age<<endl;
    cout<<"Branch :- "<<st.branch<<endl;

    for(int x : st.marks){
        cout<<x<<" ";
    }
}
