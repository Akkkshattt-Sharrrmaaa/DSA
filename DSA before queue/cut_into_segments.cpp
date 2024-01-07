#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(int n , vector<int>& lengths){

    // base case 
    if(n == 0){
        return 0;
    }

    if(n < 0){
        return INT_MIN;
    }

    int maxi = INT_MIN;

    for(int i=0; i<lengths.size(); i++){
        int ans = solve(n-lengths[i], lengths);
        if(ans!= INT_MIN){
            maxi = max(maxi, ans+1);
        }
    }
return maxi;
}

int main(){

    int n = 12;
    vector<int> lengths{5,3,2};

    int sol = solve(n, lengths);

    cout<<sol<<endl;

return 0;
}