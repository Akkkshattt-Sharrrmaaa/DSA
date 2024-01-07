#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){

    map <int , int> mp;
    map <int , int> :: iterator it;

    mp[0] = 231;
    mp[3] = 3243;
    mp[8] = 23;
    mp[2] = 12;

cout<<endl;
    for(it = mp.begin() ; it !=mp.end() ; it++){
        cout<<it->first <<" "<<it->second<<endl;
    }


return 0;
}