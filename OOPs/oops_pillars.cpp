#include<iostream>
using namespace std;

class Animal{

    public:
    void speak(){
        cout<<endl;
        cout<<"speaking"<<endl;
    }
};


class Dog :public Animal{

    public:
    void speak(){
        cout<<endl;
        cout<<"dog is barking"<<endl;
    }

};

int main(){

    Animal myani;
    myani.speak();

    Dog mydog;
    mydog.speak();


return 0;
}