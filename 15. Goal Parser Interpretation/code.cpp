#include <bits/stdc++.h>
using namespace std;

int main(){
    string command="(al)G(al)()()G";
    string ans="";
    for(int i=0; i<command.size(); i++){

        if(command[i]=='(' && command[i+1]==')'){
            ans.append("o");
            i++;
        }
        else if(command[i]!='(' && command[i]!=')'){
            ans.push_back(command[i]);
        } 
    }
    cout<<ans;

    return 0;
}