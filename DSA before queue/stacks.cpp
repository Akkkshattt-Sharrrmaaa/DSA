#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);

    cout<<"top element is : "<<stk.top()<<endl;

    stk.pop();
    stk.pop();

    cout<<"popped two elements"<<endl;

    cout<<"now top element is : "<<stk.top()<<endl;

    if(stk.empty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }

return 0;
}