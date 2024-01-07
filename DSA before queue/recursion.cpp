#include<iostream>
using namespace std;

void print_subsequence(string str,string output,int i){

    //base case
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }
    
    //exclude
    print_subsequence(str,output,i+1);

    //include
    str.push_back(str[i]);
    print_subsequence(str,output,i+1);


}

int main(){

    string str="abc";

    int i=0;
    string output="";
    print_subsequence(str,output,i);

return 0;
}