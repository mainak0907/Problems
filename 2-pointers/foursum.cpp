#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> foursum(vector<int> &arr, int target){
    int n=arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        for (int j =i+1; j<n;j++){
            if ( j > i+1 && arr[j]==arr[j-1]) continue;
            int k=j+1;
            int l=n-1;
            while(k<l){
                long long sum=arr[i]+arr[j];
                sum+=arr[k];
                sum+=arr[l];
                if(sum < target){
                    k++;
                }
                else if(sum > target){
                    l--;
                }
                else{
                    vector<int> temp= {arr[i],arr[j],arr[k],arr[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l && arr[k]==arr[k-1]) k++;
                    while(k<l && arr[l]==arr[l+1]) l--;
                }
            }
        }
    }
    return ans;
}
int main()
{
    int target = 8;
    vector<int> arr = {1,1,1,2,2,2,3,3,3,4,4,4,5,5};
    vector<vector<int>> res = foursum(arr, target);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}