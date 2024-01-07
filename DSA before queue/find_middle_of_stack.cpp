#include<iostream>
#include<stack>
using namespace std;

void findMiddle( stack<int> &stk , int totalSize){

    if( totalSize == 0 ){
        cout<<" stack is empty "<<endl;
        return;
    }

    // base case 
    if( stk.size() == (totalSize/2) + 1 ){
        cout<<endl;        
        cout<<" middle element is : "<< stk.top() <<endl<<endl;
        return;
    }

    int temp = stk.top();
    stk.pop();

    // recursive call
    findMiddle(stk, totalSize);

    // bring back to org
    stk.push(temp);

}

int main(){

    stack<int> stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);

    int totalSize = stk.size();

    findMiddle(stk, totalSize);

return 0;
}