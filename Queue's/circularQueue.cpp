#include<iostream>
using namespace std;

class cirQ{
    public:
        int* arr;
        int front;
        int rear;
        int size;


        cirQ(int size){
            arr = new int[size];
            front = 0;
            rear = 0;
            this->size = size;

            cout<<endl<<"circular queue of size : "<<this->size<<" initialized"<<endl;
        }

        int qSize(){

            if(front < rear){
                return (rear-front);
            }else{
                return (size-(front-rear));
            }
        }

        bool isEmpty(){

            if(front == rear && rear == 0){
                front = 0;
                rear = 0;
                return true;
            }

            return false;
        }

        void push(int data){

            //check if queue is full
            if(qSize() == size){
                cout<<"Cannot push, queue is full"<<endl;
            }else{
                if(rear == size && front!=0){
                    rear = 0;
                    if(rear<front){
                        arr[rear] = data;
                        rear++;
                    }
                }else{
                    arr[rear] = data;
                    rear++;
                }
            }

        }

        void pop(){

            if(front == size-1){
                front =0 ;
            }else{
                front++;
            }

            if(rear == size && front!=0){
                rear = 0;
            }
        }

};

int main(){


    cirQ q(5);

    q.push(24);
    q.push(342);
    q.push(54);
    q.push(85);
    q.push(53);

    cout<<"size of queue is : "<<q.qSize()<<endl;

    q.push(956);
    q.pop();

    cout<<"size of queue is : "<<q.qSize()<<endl;

    cout<<"front is at : "<<q.front<<endl;
    cout<<"rear is at : "<<q.rear<<endl;

    q.push(545);

    cout<<"size of queue is : "<<q.qSize()<<endl;

    q.push(88);
    q.pop();
    cout<<"size of queue is : "<<q.qSize()<<endl;
    q.push(88);
    cout<<"size of queue is : "<<q.qSize()<<endl;


return 0;
}