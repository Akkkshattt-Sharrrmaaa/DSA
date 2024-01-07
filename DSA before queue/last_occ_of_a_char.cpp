#include<iostream>
#include<string>
#include<limits.h>
using namespace std;

void find_last(string str, char to_find, int i, int &maxi){

    // base case
    if(i> str.length()) {
        return;
    }

    // solve for one case

    if(str[i] == to_find){
        maxi = i;
    }

    find_last(str, to_find, i+1, maxi);

}


int main(){

    string str = "abcddefg";
    char to_find = 'f';
    
    int maxi = -1;

    find_last(str, to_find , 0 , maxi);
    cout<<maxi<<endl;

return 0;
}