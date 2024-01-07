#include<iostream>
using namespace std;

int partition(vector<int> &arr ,int s , int e){

    int pivotIndex = s;

    // counting no of elements smaller than pivot
    int count=0;
    for(int i=s+1 ; i<e ;i++){
        if(arr[i]<=arr[pivotIndex]) count++;
    }

    // placing pivot element at correct index

    swap(arr[pivotIndex], arr[s+count]);
    // updating pivot index to its currect position 
    pivotIndex = s+count;

    // place smaller elements to left and larger to the right

    int i = s;
    int j = e;

    while(i < pivotIndex && j> pivotIndex){

        while(arr[i]< arr[pivotIndex]){
            i++;
        }
        while(arr[j] > arr[pivotIndex]){
            j--;
        }

        if(i< pivotIndex && j>pivotIndex){
            swap(arr[i] , arr[j]);
        }

    }


return pivotIndex;
}


void quickSort(vector<int> &arr, int s , int e){

    // base case
    if(s>=e) return;

    //partition
    int p = partition(arr, s ,e);

    // recursive calls
    quickSort(arr, s , p-1);
    quickSort(arr, p+1 ,e);

}


int main(){

    vector<int> arr{8,3,4,1,20,50,30};
    int len = arr.size();
    cout<<"len is : "<<len<<endl;

    cout<<"original array : ";
    for(int i=0 ;i<len-1;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    int s =0;
    int e =len-1;

    quickSort(arr, s , e);
    cout<<endl;

    cout<<"sorted element : ";
    for(int i= s; i< len-1 ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

return 0;
}