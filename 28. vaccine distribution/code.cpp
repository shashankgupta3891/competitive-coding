#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

int findRatio(vector<int>& arr, int N){

    int sum=0;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
    }

    return sum/N;
}

void findSameOrLess(vector<int>& arr, int ratio, int& N){

    int equalIndex=-1;
    int smallIndex=-1;

    int smallest=ratio;

    int max=ratio;
    int maxIndex=-1;

    for(int i=0; i<arr.size(); i++){
        if(arr[i]<= ratio && arr[i]!=0){
           smallest=arr[i];
           smallIndex=i;
        } 

        if(arr[i]>max) {
            max=arr[i];
            maxIndex=i;
        }
    }

    // cout<<smallest<< " "<<smallIndex;

    if(smallIndex!=-1){
        ans.push_back(arr[smallIndex]);
        N-=1;
        return;
    } 

    if(maxIndex!=-1){

        if(N==2){
            ans.push_back(max);
            arr[maxIndex]=0;
            return;
        } 
        ans.push_back(ratio);
        N-=1;

        arr[maxIndex]=   arr[maxIndex] - ratio;
        return;

    }

}

void findDistribution(vector<int>& arr, int N){

    int num=N;

    for(int i=0; i<num; i++){
        int ratio=findRatio(arr, N);
        findSameOrLess(arr, ratio, N);
    }

    // int ratio=findRatio(arr, N);

    // // cout<<ratio;

    // // for(int i=0)
    // findSameOrLess(arr, ratio, N);

    // ratio=findRatio(arr, N);
    
    // findSameOrLess(arr, ratio, N);

    
    


}

int main(){
    int N=5;
    int M=2;
    vector<int> arr={7,4};

    findDistribution(arr, N);

    for(auto i: ans) cout<<i<<" ";

    // int ratio=findRatio(arr, N);

    // for(int i=0; i<M; i++){

    // }

    return 0;
}