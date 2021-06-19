#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v={2,5,1,3,4,7};
    int n=3;

    vector<int> v1;

    for(int i=0; i<(v.size()/2); i++){
        v1.push_back(v[i]);
        v1.push_back(v[i+n]);
    }

    for(int i=0; i<v1.size(); i++) cout<<v1[i];

    return 0;

}