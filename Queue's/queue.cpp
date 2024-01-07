#include<iostream>
#include<queue>
using namespace std;

int main(){


    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout<<"size of queue is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }

    cout<<"front element of queue is : "<<q.front()<<endl;

    q.pop();
    q.pop();

    cout<<"after 2 pops"<<endl<<"size of queue is : "<<q.size()<<endl;

    cout<<"after 2 pops"<<endl<<"front element is : "<<q.front()<<endl;



return 0;
}