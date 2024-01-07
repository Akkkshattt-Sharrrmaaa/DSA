#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array :";
    cin>>n;

    int arr[n];
    cout<<"Enter array :";
    for(int i=0 ;i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key : ";
    cin>>key;

    int s =0 ;
    int e = n-1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(arr[mid]==key || arr[mid-1]==key || arr[mid+1]==key){
            cout<<"Found ";
            return 0;
        }else if(key>arr[mid]){
            s=mid+2;
        }else{
            e=mid-2;
        }
    }cout<<"Not found"<<endl;

return 0;
}