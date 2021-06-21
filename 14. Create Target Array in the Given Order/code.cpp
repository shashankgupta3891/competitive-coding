#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={1,2,3,4,0};
    vector<int> index={0,1,2,3,0};
    vector<int> target;
    
    for(int i=0;i<nums.size(); i++){
        target.insert(target.begin()+ index[i] , nums[i]);
    }

    for(auto t:target) cout<<t<<" ";
    return 0;
}