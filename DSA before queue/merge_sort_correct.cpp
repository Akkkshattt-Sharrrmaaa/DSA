#include<iostream>
using namespace std;

void merge( int * arr , int s , int e){

    int mid = (s+e)/2;

    int l_size = mid - s + 1; 
    int r_size = e - mid;

    int *left = new int[l_size];
    int *right = new int[r_size];

    int k =s;
    // copy in left array 
    for(int i=0 ; i<l_size ;i++){
        left[i] = arr[k];
        k++;
    }

    k = mid+1;
    // copy in right array
    for(int i =0 ; i<r_size ; i++){
        right[i] = arr[k];
        k++;
    }

    // merge logic

    int left_index = 0;
    int right_index = 0;
    int main_index = s;

    while(left_index < l_size && right_index <r_size){

        if(left[left_index] <= right[right_index]){
            arr[main_index] = left[left_index];
            main_index++;
            left_index++;
        }else{
            arr[main_index] = right[right_index];
            main_index++;
            right_index++;
        }

    }

    // copy remaining

    while(left_index < l_size){
        arr[main_index] = left[left_index];
        main_index++;
        left_index++;
    }

    while(right_index < r_size){
        arr[main_index] = right[right_index];
        main_index++;
        right_index++;
    }

}

void mergeSort(int * arr , int s , int e){

    int mid = s + (e-s)/2;

    // base case
    if(s>=e) return;

    // recursive calls
    mergeSort(arr, s , mid);
    mergeSort(arr, mid+1,e);

    // mergecall
    merge(arr , s ,e);
}

int main(){


    int arr[] = {7,3,2,16 , 24,4 ,11 ,9};
    int s = 0 ;
    int e = 7 ; 

    cout<<"original array : ";
    for(int i =0 ;i<= e ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    mergeSort(arr , s , e);

    cout<<"sorted array : ";
    for(int i =0; i<=e ;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    
return 0 ;
}