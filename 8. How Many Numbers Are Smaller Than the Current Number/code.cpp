
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums={8,1,2,2,3};
    int len=nums.size(), s=0;
    vector<int> ans;
    vector<int> n(101);
    vector<int> sum(101);

    for(int i=0; i<len; i++){
        n[nums[i]]++;
    }

    for(int i=1; i<101; i++){
        s=s+n[i-1];
        sum[i]=s;
    }
    for(int i=0; i<len; i++){
        ans.push_back(sum[nums[i]]);
    }
   for(auto a:ans) cout<<a;
    return 0;

}