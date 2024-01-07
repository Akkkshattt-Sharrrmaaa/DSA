#include<iostream>
#include<vector>
using namespace std;

int find_pivot(vector <int> arr){

    int s = 0 ;
    int e = arr.size()-1;

    while(s<=e){

           int mid = s + (e-s)/2;

        if(arr[mid]>arr[mid+1] && mid+1<=e){
            return mid;
        }else if(arr[mid-1]>arr[mid] && mid-1>=s){
            return mid-1;
        }else if(arr[s]>arr[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
return -1;
}

int main(){

    int n;
    cout<<"Enter n :";
    cin>>n; 

    vector<int> arr(n);
    cout<<"Enter vector : ";

    for(int i=0 ;i<arr.size();i++){
        cin>>arr[i];
    }

    int pos = find_pivot(arr);
    cout<<"Pivot at : "<<pos<<endl;
    
return 0;
}