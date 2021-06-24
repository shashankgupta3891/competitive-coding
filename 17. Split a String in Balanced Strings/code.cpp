#include <iostream>
#include <string>

using namespace std;

int main(){
    string s="RLRRLLRLRL";
    
    int count=0, ans=0;
    for(auto a:s){
        count+= a=='L'?1:-1;
        if(count==0){
            count=0;
                ans++;
        }
    }
    cout<<ans;
    return 0;
}