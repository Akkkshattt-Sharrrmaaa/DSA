#include<iostream>
using namespace std;

class Queue{
    public:

        int *arr;
        int size;
        int front;
        int rear;

        Queue(int size){
            this->size = size;
            arr = new int[size];
            front = 0;
            rear = 0;
    
            cout<<"queue initialized  of size : "<<size<<endl;
        }

        void push(int data){
            if(rear == size){
                cout<<"queue full, cannot push"<<endl;
            }else{
                arr[rear] = data;
                rear++;
            }
        }

        void pop(){
            if(front == rear){
                cout<<"queue empty< cannot pop"<<endl;
            }else{
                front++;
                if(front == rear){
                    front = 0;
                    rear = 0;
                }
            }
        }

        void isEmpty(){
            if(front == rear){
                cout<<"queue is empty"<<endl;
            }else{
                cout<<"queue is not empty"<<endl;
            }
        }

        void getFront(){
            if(front == rear){
                cout<<"no element in queue so, no front"<<endl;
            }else{
                cout<<"front element : "<<arr[front];
            }
        }

};

int main(){

    Queue q(5);

return 0;
}