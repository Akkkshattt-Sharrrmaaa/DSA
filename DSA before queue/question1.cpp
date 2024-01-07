#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int processArray(vector<int> &arr){

    int min_seq = INT_MAX;
    int no_of_elements_removed = 0;
    for(int i =0 ;i < arr.size() ; i++){
        if( arr[i]>=10 && arr[i]<=99){

                min_seq = min(min_seq , arr[i]);
                if(min_seq != arr[i]){
                    // remove this element
                    for(int j= i ; j< arr.size()-1 ; j++){
                        arr[j]=arr[j+1];
                        no_of_elements_removed++;
                      
                    }

                }
        }

        if(arr[i]>99 || arr[i] <10){
            min_seq = INT_MAX;
        }
        
    }

    int newlength = arr.size() - no_of_elements_removed;

    // new printing
    for(int i = 0 ; i < newlength ; i++){
        cout<<arr[i];
    }

return newlength;

}

int main(){


    bool posnum = true;
    vector<int> arr;

    while(posnum){

        int num;
        cin>>num;

        if( num >=0){
            arr.push_back(num);
        }else{
            posnum = false;
        }
    }

    int new_len = processArray(arr);

    
return 0;
}