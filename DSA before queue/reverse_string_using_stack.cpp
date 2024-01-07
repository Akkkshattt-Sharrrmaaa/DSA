#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){

    string str = "abcdef";
    stack<char> stk;

    cout<<endl;
    cout<<"original string : "<<str<<endl<<endl;

    for(int i=0 ; i<str.length() ; i++){
        stk.push(str[i]);
    }

    int i=0;
    while(!stk.empty()){
        str[i] = stk.top();
        stk.pop();
        i++;
    }

    cout<<str;

return 0;
}