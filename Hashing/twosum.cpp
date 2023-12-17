#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(int n, int target, vector<int> &arr)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int needMore = target - num;
        if (mpp.find(needMore) != mpp.end())
        {
            return {mpp[needMore], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}
int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(n, target, arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}
// Unordered map stores in key value pair
// myMap.find(key): This function searches the unordered_map for the element with a key equivalent to key. If the element is found, it returns an iterator pointing to the key-value pair;
// otherwise, it returns myMap.end().

// myMap.end() : This function returns an iterator pointing to the past
// - the - end element in the unordered_map.It's essentially used to indicate that the search has reached the end of the container without finding the desired element.