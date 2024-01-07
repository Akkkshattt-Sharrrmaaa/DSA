#include<iostream>
#include<vector>
using namespace std;


int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    vector <int> arr(n);
    cout<<"Enter arr : ";

    for(int i=0 ;i<arr.size();i++){
        cin>>arr[i];
    }

    for(int i=1;i<arr.size();i++){
        int key = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>key){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=key;
    }

cout<<"Sorted arr : ";
for(auto i : arr){
    cout<<i<<" ";
}cout<<endl;

return 0;
}