#include <iostream>
using namespace std;
class car{
    //Class Attribute
public:
    string name;
    string model;
    int price;

    //Constructor
    // A constructor in C++ is a special method that is automatically called when an object of a class is created.

    car(string cname, string cmodel, int cprice){
        name = cname;
        model = cmodel;
        price = cprice;
    }

    //Class Method
    void getinfo(){
        cout<<"Car Name :-"<<name<<endl;
        cout<<"Car Model No:-"<<model<<endl;
        cout<<"Car Price :-"<<price<<endl;
    }
};
int main(){
    int price; 
    string name;
    string model;
    cout<<"Enter name , Model and price of Car:- "<<endl;
    cin>>name>>model>>price;

    int price1;
    string name1, model1;
    cout<<"Enter name, model and price for car 2:-"<<endl;
    cin>>name1>>model1>>price1;


    car car1(name,model,price);     //initializing constructor/ creating object
    car car2(name1,model1,price1);
    car1.getinfo();                 //calling class method
    car2.getinfo();
}