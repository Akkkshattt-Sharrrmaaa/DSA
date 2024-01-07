#include<iostream>
using namespace std;

int main(){

    int n, m;
    cout<<"Enter rows and col : ";
    cin>>n>>m;

    int key;
    cout<<"Enter key : ";
    cin>>key;

    int arr[n][m];

    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        for(int j=0 ;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int s = 0 ;
    int e = n*m-1;
    
    while(s<=e){
        int mid = s + (e-s)/2;
        int row = mid/m;
        int col = mid % m;

        if(key==arr[row][col]){
            cout<<"Present : ";
            return 1;
        }else if(key<arr[row][col]){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }

return 0;
}