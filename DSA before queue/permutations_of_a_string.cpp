#include<iostream>
#include<string>
using namespace std;

void printPermutations(string &str, int i){

    // base case 
    if( i >= str.length() ){
        cout<<str<<endl;
        return;
    }

    for( int j = i ; j < str.length() ; j++ ){

        swap(str[i] , str[j]);

        printPermutations(str, i+1);

        swap(str[i] , str[j]);
    }

}

int main(){

    string str = "abc";
    int i =0;
    
    printPermutations(str, i);

return 0;
}