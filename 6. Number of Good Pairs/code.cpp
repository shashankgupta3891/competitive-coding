#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v={1,2,3};

    unordered_map<int, int> count;

    int ans=0;

    for(auto ele:v){

        if(count[ele]!=0) ans+=count[ele];

        count[ele]+=1;

    }

    cout<<ans;

    return 0;

}