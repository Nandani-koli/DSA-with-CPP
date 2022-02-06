#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 ={1,2,3,4,5};

    stack<int,vector<int> > s1(v1);         //assign vector to stack s1 constructor

    cout << "Size of stack s1 = " << s1.size() << endl;

    //pop out elemets or print 
    while (!s1.empty())
    {
       cout<<s1.top()<<" ";
       s1.pop();
    }
    cout<<endl;


    stack<char> s2;
    //insert elements
    s2.push('a');
    s2.push('b');
    s2.push('c');
    s2.push('d');

    //delete elements
    s2.pop();

    cout<<s2.top()<<endl;


    //using swap function
    stack<int> even;
    for (int i = 0; i < 5; ++i)
        even.push(i * 3);

    stack<int> odd;
    for(int i = 0; i< 5; i++)
        odd.push(i*2);

    even.swap(odd);

    cout<<"EVEN STACK ELEMENTS-> ";
    while (!even.empty())
    {
       cout<<even.top()<<" ";
       even.pop();
    }
    cout<<endl;

     cout<<"ODD STACK ELEMENTS-> ";
    while (!odd.empty())
    {
       cout<<odd.top()<<" ";
       odd.pop();
    }
    cout<<endl;


    s2.emplace('f');       //inserts new element at the top of stack. 
    while (!s2.empty())
    {
       cout<<s2.top()<<" ";
       s2.pop();
    }
    cout<<endl;                 //f c b a 
}