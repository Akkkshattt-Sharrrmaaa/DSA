#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool redundantParenthesis( stack<char> &stk , string s ){

    for( int i=0 ; i<s.length() ; i++ ){
        char ch = s[i];

        if( ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            stk.push( ch );
        }   

        if(! stk.empty()){

            if( ch == ')' ){
                if( stk.top() == '(' ){
                    return true;
                }else{
                    while( stk.top() != '(' ){
                        stk.pop();
                    }
                    stk.pop();
                }
            }

        }else{
            return false;
        }
    }
}

int main(){

    string s = "((a+b*c)+(d))";

    stack <char> stk;

    bool redundant  = redundantParenthesis( stk , s );
    cout<< " Are there redundant paranthesis : " << ((redundant) ? " true " : " false") <<endl;
    
return 0;
}