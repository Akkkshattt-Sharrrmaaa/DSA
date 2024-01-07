#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isSol(int L , vector<int> &R ,int N , int mid){

    int cook = 0;
    int parata = 1;
    int time_elapsed = 0;

    while(parata <= N){
        if(time_elapsed<mid){
            time_elapsed += R[cook]+ 
        }
    }

}

int solution(int L , vector<int> &R, int N){

    sort(R.begin(), R.end());

    int start = 0;
    int end = ((R[L-1])*(N)*(N-1))/2;
    int ans = -1;

    while(start<=end){

        int mid = start + (end-start)/2;

        if(isSol(L , R , N , mid)){
            ans = mid;
            end = mid -1;
        }else{
            start = mid+1;
        }
    }
return ans;
}

int main(){

    int L;
    cout<<"Enter the no of cooks : ";
    cin>>L;

    vector<int> R(L);
    cout<<"Enter the ranks of the cooks : ";
    for(int i=0 ;i< R.size(); i++){
        cin>>R[i];
    }

    int N;
    cout<<"Enter the no of paratas : ";
    cin>>N;

    int time = solution(L , R , N );
    cout<<"Time is : "<<time<<endl;

return 0;
}