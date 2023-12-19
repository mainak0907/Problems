#include <bits/stdc++.h>
using namespace std;
int func(vector<int> &height){
    int n= height.size();
    int r=n-1;
    int l=0;
    int maxRight=0;
    int maxLeft=0;
    int result=0;
    while(l<=r){
         if(height[l]<=height[r]){
            if(height[l]>maxLeft) maxLeft=height[l];
            else result+=maxLeft-height[l];
            l++;
         }
         else {
            if(height[r]>maxRight) maxRight=height[r];
            else result+=maxRight-height[r];
            r--;
         }
    }
    return result;
}
int main(){
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    cout << func(height);
}