#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="IV";

    unordered_map<char, int> map;

    map['I']=1;
    map['V']=5;
    map['X']=10;
    map['L']=50;
    map['C']=100;
    map['D']=500;
    map['M']=1000;

    int count=0;

    for(int i=0; i<s.size(); i++){

        if(map[s[i]]< map[s[i+1]]){
            count+=map[s[i+1]]-map[s[i]];
            i++;
        }else{
            count+=  map[s[i]];
        }
    }

    cout<<count;

    

    return 0;
}