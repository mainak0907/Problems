// unique triplets whose sum is 0
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threesum(vector<int>&arr, int n){
set<vector<int>> final_set;
for(int i=0;i<n;i++){
    set <int> hashset;
    for(int j=i+1;j<n;j++){
        int third=-(arr[i]+arr[j]);
        if(hashset.find(third) != hashset.end()){
            vector<int> temp ={arr[i],arr[j],third};
            sort(temp.begin() , temp.end());
            final_set.insert(temp);
        }
        hashset.insert(arr[j]);
    }
}
vector<vector<int>> ans (final_set.begin() , final_set.end());
return ans;
}
int main(){
    int n = 6;
    vector<int> arr = {-1,0,1,2,-1,4};
    vector<vector<int>> res= threesum(arr,n);
    for (int i = 0; i < res.size(); i++)
{
    for (int j = 0; j < res[i].size(); j++)
    {
        cout << res[i][j] << " ";
    }
    cout << endl;
}
}