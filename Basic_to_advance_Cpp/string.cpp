#include <iostream>
#include <string>
using namespace std;
int main()
{
    string fname = "Nandani"; 
    string lname = "Koli";
    string name = fname +" "+ lname; //concatenation
    cout<<name<<"\n";

    //Append;
    string fullname = fname.append(" coder");
    cout<<fullname<<"\n";
    cout<<fullname.length()<<endl;
    cout<<fullname.size()<<endl; //same as length

    cout<<fname[0]<<endl;
    
    fname[4] = 'i';
    cout<<fname<<"\n";

    // user Input 
    string place;
    getline(cin, place);
    cout<<place<<"\n";
    cout<<place.capacity();

    return 0;
}