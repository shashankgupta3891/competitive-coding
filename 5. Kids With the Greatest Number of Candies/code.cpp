#include <iostream>
#include <vector>

using namespace std;

int maximumOfV(vector<int> v){
    int maximum=INT_MIN;

    for(int i=0; i<v.size(); i++) maximum=max(maximum,v[i]);

    return maximum;
}

int main(){

    vector<int> candies={2,3,5,1,3};
    int extraCandies=3;
    vector<bool> output;

    int maximum =maximumOfV(candies);
    for(auto candy:candies) output.push_back((candy+extraCandies)>= maximum);
    for(auto out:output) cout<<out;

    return 0;
}