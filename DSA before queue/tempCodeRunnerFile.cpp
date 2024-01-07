#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{2,1,4,3};
    vector<int> ans{-1,-1,-1,-1};

    stack<int> stk;
    stk.push(-1);

    for( int i = arr.size() - 1 ; i>=0 ; i--){

        int curr = arr[i];

        while( stk.top() >= curr ){
            stk.pop();
        }

        ans[i] = stk.top();

        stk.push(arr[i]); 

    }

    for(int i = 0 ; i<arr.size() ; i++){
        cout<< arr[i] <<" ";
    }cout<<endl;

    for (int i =0 ; i<ans.size() ; i++){
        cout<< ans[i]<<" ";
    }cout<<endl;


return 0;
}