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

void reverseK(queue<int>& q , int k){

    stack<int> s;

    for(int i = 0 ; i < k ; i++ ){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    for(int i = 0 ; i < (q.size()-k) ; i++ ){

        int temp = q.front();
        q.pop();
        q.push(temp);
    }

}


int main(){

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    printq(q);

    int k;
    cout<<"enter the value of K : ";
    cin>>k;

    if(k<2){

        cout<<endl<<"Queue will remain the same"<<endl;
        printq(q);

    }else if( k>q.size()){

        cout<<"Invalid value of k"<<endl;
        return 0;

    }else{

        reverseK(q, k);
    }

    cout<<endl<<"After reverseal"<<endl;

    printq(q);

return 0;
}

//  ------------------- brute force ----------------


// #include<iostream>
// #include<queue>
// using namespace std;

// void printq(queue<int> q){

//     queue<int> tempq;
//     cout<<endl<<"Queue : ";

//     for(int i = 0 ; i<q.size() ; i++){

//         cout<<q.front()<<" ";
//         tempq.push(q.front());
//         q.pop();

//         q.push(tempq.back());
//     }
//     cout<<endl<<endl;

// }

// void reverseq(queue<int>& q){

//     // base case
//     if(q.empty()){
//         return;
//     }

//     // 1 case mera
//     int temp = q.front();
//     q.pop();

//     //recursion sambhal lega

//     reverseq(q);
//     q.push(temp);
// }

// void reverseK(queue<int>& q, int k ){

//     queue<int> tempq;
//     for(int i = 0; i<k ; i++){

//         tempq.push(q.front());
//         q.pop();

//     }

//     printq(tempq);

//     reverseq(tempq);

//     printq(tempq);

//     while(!q.empty()){
//         tempq.push(q.front());
//         q.pop();
//     }

//     printq(tempq);

//     while(!tempq.empty()){
//         q.push(tempq.front());
//         tempq.pop();
//     }

// }

// int main(){

//     queue<int> q;
//     q.push(3);
//     q.push(6);
//     q.push(9);
//     q.push(2);
//     q.push(8);

//     printq(q);

//     int k;
//     cout<<"enter the value of K : ";
//     cin>>k;

//     if(k<2){

//         cout<<endl<<"Queue will remain the same"<<endl;
//         printq(q);

//     }else if( k>q.size()){

//         cout<<"Invalid value of k"<<endl;
//         return 0;

//     }else{

//         reverseK(q, k);
//     }

//     cout<<endl<<"After reversal of k elements"<<endl;

//     printq(q);

// return 0;
// }