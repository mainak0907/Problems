#include <bits/stdc++.h>
using namespace std;
int longestconsequetivesequence(vector<int> &ds)
{
    int n = ds.size();
    if (n == 0)
        return 0;
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(ds[i]);
    }
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}
int main(){
    vector<int> ds ={1,101,102,2,4,3,99};
    cout << longestconsequetivesequence(ds);
}

// ALGO ->
// FIND IF A PREVIOUS NUMBER TO A NUMBER IS PRESENT 
// IF PRESENT , THEN THAT NUMBER CANNOT BE THE STARTING POINT OF A SERIES 
// WE SKIP THAT NUMBER 
// IF THERE IS NO PREVIOUS NUMBER TO A NUMBER
// THEN , THAT NUMBER IS A STARTING OF A SEQUENCE AND WE CHECK FOR NEXT OCCURANCES AND INCREASE THE COUNT