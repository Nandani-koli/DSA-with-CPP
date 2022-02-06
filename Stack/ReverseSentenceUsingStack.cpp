#include <iostream>
#include <stack>
using namespace std;
void reverseSentence(string s)
{
    stack <string> reverse;
    
    for (int i = 0; i < s.length(); i++)
    {
        string word="";
        while (s[i] != ' ' && i<s.length())
        {
            word += s[i];
            i++;
        }
        reverse.push(word);
    }

    //print stack;
    while (!reverse.empty())
    {
       cout<<reverse.top()<<" ";
       reverse.pop();
    }
    
}
int main()
{
    string s;
    getline(cin,s);
   
   reverseSentence(s);
}