#include <iostream>
using namespace std;

int main(){
    int n=1, start=7; 
    int ans=start;

    for(int i=1; i<n;i++){

        cout<<(start+(i*2))<<endl;
        ans^=start+(i*2);
    }

    cout<<ans;

    return 0;

}