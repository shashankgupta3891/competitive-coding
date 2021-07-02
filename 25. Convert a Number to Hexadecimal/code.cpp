#include<bits/stdc++.h>
using namespace std;

int main(){

    int num=-2;

    if(num<0){

        unsigned int n=num;

        cout<<n<<" "<<num;
        
        string ans="";

        while(n){
            int r=n%16;

            if(r<10) ans.push_back(r+48);
            else ans.push_back(r+55+32);

            n/=16;
        }

        reverse(ans.begin(), ans.end());

        cout<<ans;


        // cout<< "ffffffff";
    }
   else if(num==0){
        cout<< "0";
    }else{

    string ans="";

    while(num){
        int r=num%16;

        if(r<10) ans.push_back(r+48);
        else ans.push_back(r+55+32);

        num/=16;
    }

    reverse(ans.begin(), ans.end());

    cout<<ans;
    }


    return 0;
}