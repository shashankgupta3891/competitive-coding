#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums={1,2,3,4};
    vector<int> ans;

    for(int i=0; i<(nums.size()/2); i++){
        
        vector<int> temp(nums[i*2], nums[(i*2)+1]); 

        ans.insert(ans.end(),temp.begin(), temp.end() );
    }

    for(auto answer:ans) cout<<answer;

    return 0;
}