#include <iostream>
#include<stack>
#include<math.h>
using namespace std;
int postEvaluation(string s)
{
    stack<int> st;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i]-'0');
        }

        else{
            int op2 = st.top();     //top element will store in operand 2 
            st.pop();
            int op1 = st.top();        //2nd top element will store in operand 1
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;

            case '-':
                st.push(op1-op2);
                break;

            case '*':
                st.push(op1*op2);
                break;

            case '/':
                st.push(op1/op2);
                break;

            case '^':
                st.push(pow(op1,op2));
                break;
            
            default:
                break;
            }
        }
    }
    return st.top();
}
int main()
{
   string s;
   getline(cin,s);

  cout<<postEvaluation(s)<<endl;
    
}