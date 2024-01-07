#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solution(vector<int>& coins, int target){

    int output = 0;

    // base case 
    if(target == output){
        return 0;
    }

    if(output > target){
        return INT_MAX;
    }

    for(int i=0 ; i<coins.size(); i++){
        int 
    }

}

int main(){

    int target = 3;
    vector<int> coins{1,2};

    int sol = solution(coins, target);
    cout<<sol<<endl;

return 0;
}
