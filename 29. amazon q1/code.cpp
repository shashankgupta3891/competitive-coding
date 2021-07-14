#include<bits/stdc++.h>
using namespace std;

int main(){

    // vector<vector<int>> allLocations  = {{2,1},{2,3}, {2,4}, {6,3},{5,8}};
    vector<vector<int>> allLocations  = {{-3,2},{1,2}, {3,2}, {4,2}, {5,4}};
    // vector<vector<int>> allLocations  = {};

    int numRestaurants=5;

    // if(allLocations.size()==numRestaurants) return allLocations;

    vector<vector<int>> ans;

    map<double, int> tempMap;

    for(int i=0; i< allLocations.size(); i++){
        int sum =  (allLocations[i][0] * allLocations[i][0])+(allLocations[i][1]*allLocations[i][1]);

        double sumSqrt=sqrt(sum);

        if(tempMap[sumSqrt]) tempMap[sumSqrt]= i;
        else tempMap[sumSqrt+0.001]= i;

    }



    // cout<<tempMap[2992.29];


    auto itr=tempMap.begin();

    for(int i=0; i<numRestaurants-1; i++){

        ans.push_back(allLocations[itr->second]);
        
        itr++;

        // if(itr!=tempMap.end()) itr++;
    }

    ans.push_back(allLocations[itr->second]);


    // if(ans.size()==0){
    //     vector<int> temp = {};

    //     for(int i=0; i<numRestaurants; i++){
    //         ans.push_back(temp);
    //     }
    // }

    // cout<<pow(10, 2);



    // for(auto a:ans) cout<< a[0]<<" "<< a[1];
    for(auto a:ans) cout<< a[0]<<" "<< a[1]<<endl;


    return 0;
}