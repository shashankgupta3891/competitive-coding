#include<bits/stdc++.h>
using namespace std;

int main(){

    // vector<vector<int>> allLocations  = {{2,1},{2,3}, {2,4}, {6,3},{5,8}};
    vector<vector<int>> allLocations  = {};

    int numRestaurants=4;

    // if(allLocations.size()==numRestaurants) return allLocations;

    vector<vector<int>> ans;

    map<float, int> tempMap;

    for(int i=0; i< allLocations.size(); i++){
        int sum =  (allLocations[i][0] * allLocations[i][0])+(allLocations[i][1]*allLocations[i][1]);

        tempMap[sqrt(sum)]= i;

    }


    auto itr=tempMap.begin();

    for(int i=0; i<numRestaurants; i++){

        ans.push_back(allLocations[itr->second]);

        itr++;
    }

    if(ans.size()==0){
        vector<int> temp = {};

        for(int i=0; i<numRestaurants; i++){
            ans.push_back(temp);
        }
    }



    // for(auto a:ans) cout<< a[0]<<" "<< a[1];
    for(auto a:ans) cout<< a[0]<<" "<< a[1];


    return 0;
}