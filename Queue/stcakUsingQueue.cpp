#include <iostream>
#include <queue>
using namespace std;

class stack{
    int s;
    queue <int> q1;
    queue <int> q2;
    public:
    stack()
    {
        s = 0;
    }

    void push(int value)
    {
        q2.push(value);     //push element in q2
        s++;
        while (!q1.empty())         //push all elements from q1 into q2
        {
            q2.push(q1.front());
            q1.pop();
        }
        //swap elements of q1 and q2
        queue<int>temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop()
    {
       q1.pop();
       s--;
    }

    int top()
    {
       return q1.front();
    }

    int size()
    {
        return s;
    }
    
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
   
   cout<<st.top()<<endl;            //4
   st.pop();
   cout<<"After pop-> "<<st.top()<<endl;        //After pop-> 3

   cout<<"Size-> "<<st.size()<<endl;           // Size-> 3
}