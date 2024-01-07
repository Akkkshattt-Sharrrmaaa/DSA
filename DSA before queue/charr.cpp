#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char arr[100];
    cout<<"Enter the char arr : ";
    cin.getline(arr,50);

    cout<<strlen(arr);

    for(int i=0 ; i<strlen(arr); i++){
        if(arr[i]==' '){
            arr[i]='7';
        }
    }
    
    cout<<"Replaced arr is : "<<arr<<endl;

return 0;
}