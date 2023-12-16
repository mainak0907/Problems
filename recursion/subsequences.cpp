#include <bits/stdc++.h>
using namespace std;
void printF(int i, int arr[], vector<int> &ds, int n)
{
    if (i == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    // TO TAKE
    ds.push_back(arr[i]);
    printF(i + 1, arr, ds, n);
    // TO NOT TAKE
    ds.pop_back();
    printF(i + 1, arr, ds, n);
}

int main(){
    int arr[]={3,1,2};
    int n =3;
    vector <int> ds;
    printF(0, arr, ds,n);
}

// TC -> O(n*2^n)
// SC -> O(n)