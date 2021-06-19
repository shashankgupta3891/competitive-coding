#include <bits/stdc++.h>
using namespace std;

int main(){

    string s="1.1.1.1";

    string s1="";

    int i=0;
    while(s[i]!='\0'){

        if(s[i]=='.')s1.append("[.]");
            
        else s1.push_back(s[i]);
        
        i++;
    }

    cout<<s1;

    return 0;
}