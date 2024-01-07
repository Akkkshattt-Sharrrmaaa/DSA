#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    
    cout<<"Enter array :";
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }

    int ans =0 ;
    for(int i=0 ;i<n;i++){
        ans = ans ^ arr[i];
    }

    cout<<"Repeating element is :"<<ans<<endl;

return 0;
}
