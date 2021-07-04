#include <bits/stdc++.h>
using namespace std;

int minimumDistence(vector<vector<int>>& area){
    int n = area.size();
    int m = area[0].size();
    queue<pair<int,int>> q;
    q.push({0,0});
    int visited[n][m];
    memset(visited, 0, sizeof visited);
    int xx[] = {0 , 0, -1, 1};
    int yy[] = {-1, 1, 0, 0};
    int dist[n][m];
    for(int i=0;i<n;i++)
     for(int j=0;j<m;j++){
         dist[i][m] = INT_MAX;
     }
     dist[0][0] = 0;
    while(!q.empty()){
        auto curr = q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int x = curr.second + xx[i];
            int y = curr.first + yy[i];
            if(x>=0 && y>=0 && x<m && y<n && visited[y][x] == 0 && area[y][x] != 0){
                dist[y][x] = 1 + dist[curr.first][curr.second];
                if(area[y][x] == 9)
                  return dist[y][x];
                q.push({y,x});
                visited[y][x] = 1;
            }
        }
    }
   return -1;
}

int main(){

    vector<vector<int>> area={{1,0,0}, {1,0,0}, {1,9,1}};



    int ans=minimumDistence(area);

    cout<<ans;
    return 0;
}