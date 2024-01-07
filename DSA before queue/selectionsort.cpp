#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{5,4,3,2,1};

    for(int i=0 ;i<arr.size()-2;i++){
        int min_ind=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[i]){
                min_ind=j;
            }
        }
        swap(arr[i],arr[min_ind]);
    }

    cout<<"Sorted array : ";
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;

return 0;
}