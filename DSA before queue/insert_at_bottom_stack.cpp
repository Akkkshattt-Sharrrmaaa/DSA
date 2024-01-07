#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &stk , int num){

    if(stk.empty()){
        stk.push(num);
        return;
    }

    int temp = stk.top();
    stk.pop();

   insertAtBottom(stk, num);

    stk.push(temp);

}

int main(){

    stack<int> stk;
    stk.push(2);
    stk.push(3);
    stk.push(4);

    int num;
    cout<<" enter number to insert "<<endl;
    cin>>num;

    if(stk.size() == 0){
        stk.push(num);
    }

    insertAtBottom(stk ,num);

    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }

return 0;
}