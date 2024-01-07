#include<iostream>
#include<vector>
using namespace std;

int find_peak(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid-1]<=arr[mid] && arr[mid]>=arr[mid+1]){
            return mid;
        }else if(arr[mid-1]<=arr[mid] && arr[mid]<=arr[mid+1]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    } 
return -1;
}

int main(){

    int n;
    cout<<"Enter n :";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter array : ";
    for(int i=0 ;i<arr.size();i++){
        cin>>arr[i];
    }

    int peak = find_peak(arr);
    cout<<"Peak element is : "<<peak<<endl;

return 0;
}