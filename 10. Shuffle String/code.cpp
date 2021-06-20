#include <bits/stdc++.h>

using namespace std;

int main(){

    string s= "codeleet", newStr=s;
    vector<int> indices={4,5,6,7,0,2,1,3};

    for(int i=0; i<s.length(); i++){
        newStr[indices[i]]=s[i];
    }

    cout<<newStr;

    return 0;
}