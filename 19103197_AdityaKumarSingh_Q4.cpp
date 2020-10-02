#include<iostream>
#include<stack>
using namespace std;
int prec(char c)
{
    switch(c)
    {
    case '+':
        case'-':return 1;
        case '*':
            case'/':return 2;
    default: return 0;
    }
}

int main()
{
    string exp;
    cin>>exp;
    stack<char> s;
    for(auto x:exp)
    {
        if(prec(x)==0)
            cout<<x;
        else {
            cout<<" ";
            if(s.empty() || prec(x)>prec(s.top()))
                s.push(x);
            else {
                while(!s.empty() && prec(x)<=prec(s.top()) )
                {
                    cout<<s.top()<<" ";s.pop();
                }
                s.push(x);
            }
        }
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
