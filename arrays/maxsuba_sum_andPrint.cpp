#include <bits/stdc++.h>
using namespace std;
long long func(int arr[] , int n){
    int maxi=LONG_MIN;
    int starti=-1;
    int endi=-1;
    int sum=0;
    int start=0;
    for(int i=0;i<n;i++){
        if(sum==0) start=i;
        sum+=arr[i];
        if (sum > maxi){
            maxi=sum;
            starti=start;
            endi=i;
        }
        if(sum < 0){
            sum=0;
        }
    }
    for (int i=starti; i<= endi;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return maxi;
}
int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxsum=func(arr,n);
    cout << maxsum << endl ;
}