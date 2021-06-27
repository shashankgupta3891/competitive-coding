#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> strs={"flower","flow","flight"};

    for (int i = 0; i < strs[0].size(); ++i) {
        for (const auto& s : strs) {
            if (i >= s.size() || s[i] != strs[0][i]) cout<< strs[0].substr(0, i);
        }    
    }
    cout<<strs[0];

    return 0;
}