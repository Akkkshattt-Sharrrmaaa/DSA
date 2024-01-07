#include<iostream>
#include<string>
using namespace std; 

class yoooMummm{
    private: 
        

    public:

        int mumWeight;
        string mumName;
        int mumAge;

        // constructor
        yoooMummm(){
            cout<<endl<<"-- Default -- Constructor Is Called"<<endl<<endl;
            this->mumAge = 0;
            this->mumName = "";
            this->mumWeight = 0;
             
        }

        yoooMummm(int mumWeight){
            cout<<endl<<"-- One Parameter -- Constructor Is Called"<<endl<<endl;
            this->mumWeight = mumWeight;
            this->mumName = "";
            this->mumAge = 0;
        }

        yoooMummm(int mumWeight, string mumName){
            cout<<endl<<"-- Two Parameter -- Constructor Is Called"<<endl<<endl;
            this->mumWeight = mumWeight;
            this->mumName = mumName;
            this->mumAge =0;
        }

        yoooMummm(int mumWeight , string mumName , int mumAge){
            cout<<endl<<"-- Three Parameter -- Constructor Is Called"<<endl<<endl;
            this->mumWeight = mumWeight;
            this->mumName = mumName;
            this->mumAge = mumAge;
        }

        // creating a copy constructor
        yoooMummm(yoooMummm  &obj){
            this->mumWeight = obj.mumWeight;
            this->mumName = obj.mumName;
            this->mumAge = obj.mumAge;
        }

        void licking(){
            cout<<mumName<<" is lickin it nicely"<<endl;
        }
    
        void stroking(){
            cout<<mumName<<" is stroking it nicely"<<endl;
        }

        int getWeight(){
            return mumWeight;
        }

        void setWeight(int mumWeight){
            this->mumWeight = mumWeight;
        } 
    
        ~yoooMummm(){
            cout<<endl<<endl;

            cout<<this->mumName<<"yooMumm got rekt"<<endl<<endl;

        }
    
};

int main(){



    yoooMummm mum1;

    yoooMummm mum2 = mum1;
    // cout<<"Weight of mum1 is :"<<mum1->mumWeight<<endl;
    // cout<<"Name of mum1 is :"<<mum1->mumNam e<<endl;
    // cout<<"Age of mum1 is :"<<mum1->mumAge<<endl;

    // cout<<endl<<endl;

    // yoooMummm *mum2 = new yoooMummm(45);
    cout<<"Weight of mum2 is :"<<mum2.mumWeight<<endl;
    cout<<"Name of mum2 is :"<<mum2.mumName<<endl;
    cout<<"Age of mum2 is :"<<mum2.mumAge<<endl;

    // cout<<endl<<endl;

    // yoooMummm *mum3 = new yoooMummm(50, "Mommy3");
    // cout<<"Weight of mum3 is :"<<mum3->mumWeight<<endl;
    // cout<<"Name of mum3 is :"<<mum3->mumName<<endl;
    // cout<<"Age of mum3 is :"<<mum3->mumAge<<endl;

    // cout<<endl<<endl;

    // yoooMummm *mum4 = new yoooMummm(55 , "Mommy4", 20);
    // cout<<"Weight of mum4 is :"<<mum4->mumWeight<<endl;
    // cout<<"Name of mum4 is :"<<mum4->mumName<<endl;
    // cout<<"Age of mum4 is :"<<mum4->mumAge<<endl;


return 0;
}