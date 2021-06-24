#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int key=0;
        int count=0;
        if(ruleKey=="type") key=0;        
        else if(ruleKey=="color") key=1;
        else key= 2;
        
        for(auto item:items){
            if(item[key]==ruleValue) count++;
        }
        
        return count;
    }
};