#include <bits/stdc++.h>
using namespace std;
int  printF(int i, int arr[], vector<int> &ds, int n,int s , int sum)
{
    if (i == n)
    {
        if (s==sum){
          return 1;
        }
        return 0;
    }
    // TO TAKE
    ds.push_back(arr[i]);
    s+=arr[i];
    int l = printF(i + 1, arr, ds, n,s,sum);
    // TO NOT TAKE
    ds.pop_back();
    s-=arr[i];
    int r = printF(i + 1, arr, ds, n , s , sum);
    return l+r;
}

int main(){
    int arr[]={1,2,1};
    int n =3;
    vector <int> ds;
    int sum=2;
   cout <<  printF(0, arr, ds,n,0,sum);
}

// TC -> O(n*2^n)
// SC -> O(n)