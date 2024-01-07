#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int find_int_part(int n){

    int start = 0 ;
    int end = n;
    int ans = -1;

    while(start<=end){
        int mid= start+(end-start)/2;
            
        if(pow(mid,2)==n){
            cout<<"Sq root is : "<<mid<<endl;
            return 0;
        }else if(pow(mid,2)<n){
            ans = mid;
            start = mid+1;a
        }else{
            end = mid-1;
        }
    }
return ans;
}

float find_prec_part(int n, int int_part){

    vector<float> prec;
    for(float i=0.01 ; i<=0.99 ; i++){
        prec.push_back(i);
    }

    int start = 0 ;
    int end = prec.size()-1;
    int ans=-1;
    int mid= start+(end-start)/2;

    while(start<=end){
        
        if(pow((int_part+prec[mid]),2)<=n){
            ans = prec[mid];
            start = mid+1;
        }else{
            end=mid-1;
        }
        int mid= start+(end-start)/2;
    }
float val = prec[mid];
return val;
}

int main(){

    int n;
    cout<<"Enter number : ";
    cin>>n;

    int int_part=find_int_part(n);
    float prec_part=find_prec_part(n,int_part);

    float sqroot = (float)int_part + prec_part;
    cout<<"Square root is : "<<sqroot<<endl;
    
return 0;
}