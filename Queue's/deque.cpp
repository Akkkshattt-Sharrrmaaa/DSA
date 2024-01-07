#include<iostream>
using namespace std;

// this deque is a simple doubly ended queue and not a circular doubly ended queue

class Deque{

    public:
        int size;
        int front;
        int rear;
        int *arr;

        Deque(int size){
            this->size = size;
            front = 0;
            rear = 0;
            arr = new int[size];

            cout<<endl<<"deque of size : "<<size<<" initialized"<<endl;
        }

        int qSize(){

            return (rear - front);
        }

        bool isEmpty(){
            if( rear == front){
                return true;
            }
            return false;
        }

        void push_rear( int data ){
            if( qSize() == size ){
                cout<<"queue full , unable to push"<<endl;
            }else{
                arr[rear] = data;
                rear++;
            }
        }

        void push_front( int data ){
            if( front == 0){
                cout<<"space unavailable in front, unable to push"<<endl;
            }else{
                front--;
                arr[front] = data;
            }
        }

        void pop_front(){
            if(isEmpty()){
                cout<<"queue empty, nothing to pop"<<endl;
            }else{
                front++;
                if(isEmpty()){
                    //if empty after pop, then reset
                    front = 0;
                    rear = 0;
                }
            }
        }

        void pop_rear(){
            if(isEmpty()){
                cout<<"queue empty, nothing to pop"<<endl;
            }else{
                rear--;
                if(isEmpty()){
                    front = 0;
                    rear = 0;
                }
            }
        }

};

int main(){


    Deque q(5);

    q.push_rear(1);
    q.push_rear(2);
    q.push_rear(3);

    cout<<"Size of queue is : "<<q.qSize()<<endl;

    q.pop_front();

    cout<<endl<<"Size of queue is : "<<q.qSize()<<endl;

    q.push_front(1);

    cout<<endl<<"size of queue is : "<<q.qSize()<<endl;
    q.pop_front();
    q.pop_front();
    q.pop_front();

    cout<<endl<<"size of queue is : "<<q.qSize()<<endl;

    cout<<endl<<" position of front is : "<<q.front<<" and rear is : "<<q.rear<<endl;

return 0;
}