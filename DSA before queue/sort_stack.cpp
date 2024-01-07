#include<iostream>
#include<stack>
using namespace std;

void insertSorted( stack<int> &stk , int target ){

    if( stk.empty() ){
        stk.push( target );
        return;
    }

    if( stk.top() >= target ){
        stk.push( target );
        return;
    }else{

        int temp = stk.top();
        stk.pop();

        insertSorted( stk , target );

        stk.push( temp );

    }

}

void sortStack( stack<int> &stk ){

    if( stk.empty() ){
        return;
    }

    int topElement = stk.top();
    stk.pop();

    sortStack( stk );

    insertSorted( stk , topElement );
    
}

int main(){

    stack<int> stk;
    stk.push(7);
    stk.push(11);
    stk.push(3);
    stk.push(5);
    stk.push(9);

    sortStack( stk );

    while( !stk.empty() ){
        cout<< stk.top() <<" ";
        stk.pop();
    }

return 0;
}