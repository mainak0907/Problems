#include <bits/stdc++.h>
using namespace std;
bool printF(int i, int arr[], vector<int> &ds, int n,int s , int sum)
{
    if (i == n)
    {
      if (s==sum){
        for (auto it: ds ){
            cout << it << " ";
        }
        return true;
      }
      return false;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    if(printF(i + 1, arr, ds, n,s,sum) == true){
        return true;
    }
    ds.pop_back();
    s-=arr[i];
    if (printF(i + 1, arr, ds, n , s , sum)== true){
        return true;
    }
    return false;
}

int main(){
    int arr[]={1,2,1};
    int n =3;
    vector <int> ds;
    int sum =2;
    printF(0, arr, ds,n,0,sum);
}

// return true for comdition satisfied , false for not satisfied , change the return type of fun to boolean
// check every function call for true or false 