#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr , int s , int e){

    int mid = e-s;

    int l_size = mid - s +1;
    int r_size = e - mid;

    // dynamically creating left and right array
    int *l_array = new int[l_size];
    int *r_array = new int[r_size];

    // copying in left and right array

    int k = s;
    for(int i = 0 ; i< l_size ; i++){
        l_array[i] = arr[k];
        k++;
    }

    k = mid+1;
    for(int i = 0 ; i < r_size ; i++){
        r_array[i] = arr[k];
        k++;
    }

    // merging the left and right array 

    k=s;  
    int l_index = 0 ;
    int r_index = 0 ;
    while( l_index < l_size && r_index < r_size){
        if(l_array[l_index] < r_array[r_index]){
            arr[k] = l_array[l_index];
            l_index++;
            k++;
        }else{
            arr[k] = r_array[r_index];
            r_index++;
            k++;
        }
    }


    // add remaining numbers

    while( l_index < l_size){
        arr[k] = l_array[l_index];
        k++;
        l_index++;
    }

    while ( r_index < r_size){
        arr[k] = r_array[r_index];
        k++;
        r_index++;
    }

}

void mergeSort( vector<int> &arr , int s , int e){

    // base case
    if(s <= e){
        return;
    }

    int mid = (e-s);

    // recursive call
    
    mergeSort(arr , s , mid);
    mergeSort(arr, mid+1 ,e);

    // merge call

    merge(arr, s , e);
    
}

int main(){


    vector<int> arr{7 , 3 , 2 , 16 , 24 , 4 , 11 , 9};
    int s =0 ; 
    int e = arr.size()-1;

    cout<<"unsorted array : ";
    for(int i =s ; i< e ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    mergeSort(arr , s , e);

    cout<<"soted array : ";
    for(int i=s ; i<e ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


return 0;
}