#include<iostream>
#include<string>
using namespace std;


bool checkPal(string &str, int start , int end){

    // base case

    if(start>= end){
        return true;
    }

    // solve one case

    if(str[start]!=str[end]){
        return false;
    }

    // recursive call

    return checkPal(str, start+1, end-1);

}

int main(){

    string str = "racecahrghrr";
    bool ans = checkPal(str, 0 , str.size()-1);

    cout<<ans<<endl;
return 0;
}