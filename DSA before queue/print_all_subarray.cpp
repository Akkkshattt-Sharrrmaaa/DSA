#include<iostream>
#include<vector>
using namespace std;


void print_set(vector <int> & arr, int start , int end){

    //base case

    if(end == arr.size()){
        return ;
    }

    // solving

    for(int i = start ; i<= end ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // recursive call
    print_set(arr, start , end + 1);

}

void print_all_sets( vector<int> & arr){

    for(int i =0 ; i<arr.size();i++){
        print_set(arr,i,i);
    };
}


int main(){

    vector<int> arr{1,2,3,4,5};
    print_all_sets(arr);


return 0;
}