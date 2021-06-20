#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){

    string jewels="aA", stones="aAAbbbb";

    int ans=0;

    unordered_map<char, int> count;

    for(auto stone:stones) count[stone]++;
    
    for(auto jewel:jewels) ans+=count[jewel];
    
    cout<<ans;

    return 0;
}