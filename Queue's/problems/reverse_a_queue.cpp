#include<iostream>
#include<queue>
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

void reverseq(queue<int>& q){

    // base case
    if(q.empty()){
        return;
    }

    // 1 case mera
    int temp = q.front();
    q.pop();

    //recursion sambhal lega

    reverseq(q);
    q.push(temp);
}

int main(){

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    printq(q);

    reverseq(q);

    cout<<endl<<"After Reversing"<<endl<<endl;

    printq(q);

return 0;
}