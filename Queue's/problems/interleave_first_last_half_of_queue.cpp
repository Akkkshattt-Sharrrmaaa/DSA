#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void printq(queue<int> q){

    queue<int> tempq;
    cout<<endl<<"Queue : ";

    for(int i = 0 ; i<q.size() ; i++){

        cout<<q.front()<<" ";
        tempq.push(q.front());
        q.pop();

        q.push(tempq.back());
    }
    cout<<endl<<endl;

}

void interleave(queue<int>& q){

    stack<int> first;
    stack<int> second;

    int size = q.size();

    for(int i = 0 ; i<size/2 ; i++){

        first.push(q.front());
        q.pop();

    }

    for(int i = size/2 ; i<size ; i++){

        second.push(q.front());
        q.pop();

    }

    while(!first.empty() && !second.empty()){
        q.push(first.top());
        first.pop();

        q.push(second.top());
        second.pop();
    }

    while(!first.empty()){
        q.push(first.top());
        first.pop();
    }

    while(!second.empty()){
        q.push(second.top());
        second.pop();
    }

}

int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    printq(q);

    interleave(q);

    cout<<endl<<"After interleaving"<<endl<<endl;

    printq(q);

return 0;
}