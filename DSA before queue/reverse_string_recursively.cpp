#include<iostream>
#include<string>
using namespace std;
̣
void reverse(string &str ,int i,int j){

    // base case
    if( i>=j){
        return;
    }

    // cal
    swap(str[i],str[j]);

    // recursive call
    reverse(str, i+1,j-1);
}

int main(){

    string  str = "abcdefg";

    int i=0;
    int j=str.length()-1;
    cout<<j<<endl;
    reverse(str, i,j);
    cout<<str<<endl;


return 0;
}