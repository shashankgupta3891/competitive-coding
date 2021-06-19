#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> v={{1,2,3},{3,2,1}};

    int maximum=INT_MIN;

    for(auto customer:v){
        int sum=0;
        for(auto wealth:customer) sum+=wealth;

        if(sum>maximum) maximum=sum;

    }

    cout<<maximum;

     return 0;
}