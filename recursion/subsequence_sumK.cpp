#include <bits/stdc++.h>
using namespace std;
void printF(int i, int arr[], vector<int> &ds, int n,int s , int sum)
{
    if (i == n)
    {
        if (s==sum){
        for (auto it : ds)
        {
            cout << it << " ";
        }
        cout << endl;
        }
        return;
    }
    // TO TAKE
    ds.push_back(arr[i]);
    s+=arr[i];
    printF(i + 1, arr, ds, n,s,sum);
    // TO NOT TAKE
    ds.pop_back();
    s-=arr[i];
    printF(i + 1, arr, ds, n , s , sum);
}

int main(){
    int arr[]={1,2,1};
    int n =3;
    vector <int> ds;
    int sum=2;
    printF(0, arr, ds,n,0,sum);
}

// TC -> O(n*2^n)
// SC -> O(n)