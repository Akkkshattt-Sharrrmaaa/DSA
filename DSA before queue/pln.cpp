#include<iostream>
using namespace std;

bool check(char string[]){

    int i=0;
    int j=strlen(string)-1;

    while(i<=j){
        if(string[i]==string[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }
return true;
}

int main(){

    char string[100];
    cout<<"Enter the string :";
    cin.getline(string,40);

    //check palindrome

    bool palin = check(string);

    cout<<"Palindrome : "<<palin<<endl;

return 0;
}