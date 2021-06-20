#include<bits/stdc++.h>

using namespace std;

int main(){
    int num =8;

    int count=0;

    while(num>0){
        if(num&1) { //odd
            num--;
        }else{
            num/=2;
        }
        count++;
    }

    cout<<count;

    return 0;
}