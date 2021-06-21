#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> encoded={6,2,7,3};
    int first =4;

    encoded[0]=encoded[0]^first;

    for(int i=1; i<encoded.size(); i++){
        encoded[i]= encoded[i-1]^encoded[i];
    }

    encoded.insert(encoded.begin(), first);
    for(auto a:encoded) cout<<a<<" ";
    
    return 0;
}