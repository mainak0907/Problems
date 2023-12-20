#include <bits/stdc++.h>
using namespace std;
int func(int arr[] , int n ){
    unordered_map<int , int> mpp;
    int sum=0;
    int maxlen=INT16_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0) maxlen=i+1;
        else{
            if(mpp.find(sum)!=mpp.end()){
                maxlen=max(maxlen,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
    }
    return maxlen;
}
int main(){
    int arr[]={1,-1,3,2,-2,-8,1,7,10,23};
    int n =10;
    cout << func(arr,n);
}