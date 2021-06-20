#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n=234;

    int pro=1;
    int sum=0;

    while(n!=0){

        int num=n%10;

        pro*=num;
        sum+=num;

        n/=10;
    }

    cout<<pro-sum;

    return 0;
}