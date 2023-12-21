#include <bits/stdc++.h>
using namespace std;
int func(int arr[], int n){
    if ( n==0){
        return 0;
    }
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int arr[]={1,1,2,2,3,3,4,4};
    int n=8;
    cout << func(arr,n);
}