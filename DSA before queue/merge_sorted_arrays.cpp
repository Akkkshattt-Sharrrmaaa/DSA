#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr1 , vector<int> &arr2 , vector<int> &arr , int n1 , int n2, int &i , int &j){

    

    for( int k = 0 ; k < n1+n2 -1 ; k++){

        if(arr1[i] < arr2[j]){
            arr.push_back(arr1[i]);
            i++;
        }else{
            arr.push_back(arr2[j]);
            j++;
        }

        if(i > n1-1){

            while(j<n2-1){
                arr.push_back(arr2[j]);
                j++;
            }
            break;

        }
        
        if(j > n2 -1){

            while(i < n1-1){
                arr.push_back(arr1[i]);
                i++;
            }
            break;
        }

    }

}


int main(){

    vector<int> arr1 = {2,4,6};
    cout<<"arr1 : ";
    for(int i=0 ; i<arr1.size()-1;i++){
        cout<<arr1[i]<<" ";
    }cout<<endl;
    vector<int> arr2 = {3,5,7,9,11};
    cout<<"arr2 :";
    for(int i=0 ;i<arr2.size()-1;i++){
        cout<<arr2[i]<<" ";
    }cout<<endl;

    int n1 = arr1.size();
    cout<<n1<<endl;

    int n2 = arr2.size();
    cout<<n2<<endl;

    vector<int> arr;
    int i =0 , j=0;

    merge(arr1 , arr2 , arr , n1 , n2 , i , j);
    cout<<"merged arr : ";
    for(int i=0 ;i<arr.size()-1;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

return 0;
}