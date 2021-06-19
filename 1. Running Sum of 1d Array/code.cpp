#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v ={1,2,3,4};
    
    vector<int> v1;

    for(int i=0; i<v.size(); i++){
        if(i!=0)
        v1.push_back(v[i]+v1[i-1]);
        else 
        v1.push_back(v[i]);
    }
    
    for(int i=0; i<v1.size(); i++) cout<<v1[i];

    return 0;
}


