#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> image ={{1,1,0},{1,0,1},{0,0,0}};

    for(int i=0; i<image.size(); i++){
        vector<int> temp;
        int n=image[i].size();

        for(int j=0; j<n; j++){
            temp.push_back(!image[i][n-1-j]);
        }

        image[i]=temp;
    }

    for(auto imagePart:image) for(auto i: imagePart) cout<<i;

    

    return 0;
}
