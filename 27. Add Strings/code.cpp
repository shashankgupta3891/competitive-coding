#include <bits/stdc++.h>
using namespace std;

int main(){
    string num1="777356", num2="77";
    int n1=num1.size();
    int n2=num2.size();
    int maxLen = max(n1, n2);

    int carry=0;

    string ans;
    ans.reserve(maxLen);

    for(int i=0; i<maxLen; i++){
        int last1=num1[n1-i-1]-'0';
        int last2=num2[n2-i-1]-'0';

        int sum=last1+last2+carry;

        carry = sum/10;

        ans.push_back((sum%10)+'0');

    }

    reverse(ans.begin(), ans.end());

    cout<<ans;




    return 0;
}
