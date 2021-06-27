#include <bits/stdc++.h>
using namespace std;

int main(){

    int x=-121;

    if(x<0) return false;

    vector<int> val;

    while(x!=0){
        val.push_back(x%10);

        x/=10; //x=x/10
    }

    bool flag=true;
    int n=val.size();

    for(int i=0; i<n; i++){
        if(val[i]!=val[n-i-1]) flag=false;
    }

    cout<<flag;

    return 0;
}