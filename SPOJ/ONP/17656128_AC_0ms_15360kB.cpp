/* C++ implementation to convert infix expression to postfix*/
// Note that here we use std::stack for Stack operations
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
//Function to return precedence of operators
int prec(char c)
{
	if(c == '^')
	return 3;
	else if(c == '*' || c == '/')
	return 2;
	else if(c == '+' || c == '-')
	return 1;
	else
	return -1;
}
	string ns;

void infixToPostfix(string s)
{
	stack<char>st;
   st.push('N');
  int z=s.length();
    for(int i = 0; i < z; i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))  ns.pb(s[i]);
        else if(s[i]=='(') st.push('(');
        else if(  s[i]==')')
        {
            while(st.top()!='N' and st.top()!='(')
            {
                ns.pb(st.top());
                st.pop();
            }
            if(st.top()=='(') st.pop();
        }
        else{
            while(st.top()!='N' and  prec(s[i]) <= prec(st.top())  )
            {
                 ns.pb(st.top() );
                 st.pop();
            }
            st.push(s[i]);
        }
    }
    while(st.top()!='N')
    {
      ns.pb(st.top());
      st.pop();
    }
	cout << ns << endl;

}
string expx;
int main()
{
    int x;
    cin>>x;
    while(x--){
            expx.clear();
    cin>>expx;
    ns.clear();
	infixToPostfix(expx);
    }
	return 0;
}
// This code is contributed by Gautam Singh
