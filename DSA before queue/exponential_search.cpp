#include<iostream>
using namespace std;

int binary_search(vector<int>arr, int s , int e , int key){

    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            e = mid - 1;
        }else{
            s=mid + 1; 
        }
    }
return -1;
}

int exp_search(vector<int> arr, int key){
    int n = arr.size();

    if(arr[0]==key){
        return 0;
    }else{
        int i = 1;
        while(i<n && key>=arr[i]){
            i=i*2;
        }
        return binary_search(arr, i/2,min(i,n-1),key);
    }
}

int main(){

    vector<int> arr{3,4,5,6,11,13,14,15,16};

    int ans = exp_search(arr, 13);
    cout<<"Answer : "<<ans<<endl;

return 0;
}