#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>& coins, int target){

    // base case 
    if(target == 0){
        return 0;
    }
    
    if(target < 0){
        return INT_MAX;
    }

    int mini = INT_MAX;

    for( int i =0 ; i<coins.size() ; i++ ){
        int ans = solve(coins, target-coins[i]);
        
        if(ans!=INT_MAX){
            mini = min(mini, ans+1);
        }
    }

return mini;
}


int main(){

    int target = 5;
    vector<int> coins{1,2,3};

    int sol = solve(coins, target);
    cout<<sol<<endl;

return 0;
}