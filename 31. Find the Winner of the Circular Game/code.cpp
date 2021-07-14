
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=5,k=2;

    queue<int> q;
    vector<int> v;

    for(int i=0; i<n;i++) q.push(i+1);

    while(q.size()!=1){

        for(int i=0; i<k-1; i++){
            q.push(q.front());
            q.pop();
        }

        q.pop();

    }

    cout<<q.front();


    // unordered_map<int, int> map;
    // int current=0;
    //     // cout<<map[current];

    // for(int i=0; i<n-1;i++){
    //     // current+=2;
    //     int count=0;
    //     while(count<=k){
    //        if(map[current]==0) {
    //            map[current]=1;
    //            count++;
    //        }
           
    //         cout<<current<<" ";

    //        current=(current+1)%n;
    //     }

        // cout<<map[current];
        // current+=count;
    // }
    
    return 0;

}