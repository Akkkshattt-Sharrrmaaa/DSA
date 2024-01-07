#include<iostream>
using namespace std;

class Stacks{

    public:
        int *arr;
        int size;
        int top1;
        int top2;

    Stacks(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data){
        if(top2-top1 == 1){
            cout<<"stack overlflow"<<endl;
        }else{
            top1++;
            arr[top1] = data;
        }
    }

    void push2(int data){
        if( top2-top1 == 1){
            cout<<"stack overflow"<<endl;
        }else{
            top2--;
            arr[top2] = data;
        }
    }

    int pop1(){
        if( top1 == -1 ){
            cout<<"Stack underflow"<<endl;
        }else{
            top1--;
        }
    }

    int pop2(){
        if( top2 == size ){
            cout<<"Stack underflow"<<endl;
        }else{
            top2++;
        }
    }

};

int main(){

    Stacks stk(10);

    stk.pop1();
    stk.pop2();

return 0;
}