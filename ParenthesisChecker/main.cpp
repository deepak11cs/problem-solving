#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string inp;
    stack<char> s;
    cout<<"enter the parenthesis combination to check: "<<endl;
    cin>>inp;
    int flag=0;
    for(int i=0;i<inp.length();++i){
        if(inp[i]=='(' || inp[i]=='{' || inp[i]=='[')
            s.push(inp[i]);
        if(inp[i]==')' || inp[i]==']' || inp[i]=='}'){
            if(s.empty()){
                flag=1;
                break;
            }
            else{
                char p=s.top();
                if(p==')' && inp[i]!='(' || p=='[' && inp[i]!=']' || p=='{' && inp[i]!='}'){
                    flag=1;
                    break;
                }
                s.pop();
            }
        }
    }
    if(flag==0 && s.empty())
        cout<<"valid syntax...";
    else
        cout<<"invalid syntax!!!";
    return 0;
}
