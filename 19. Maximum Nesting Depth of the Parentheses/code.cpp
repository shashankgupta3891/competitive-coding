#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="1";

    int count=0;
    int maximum=0;

    for(auto i:s){
        if(i=='(') count ++;
        if(i==')') count --;

        maximum=max(maximum, count);

    }

    cout<<maximum;

    return 0;
}