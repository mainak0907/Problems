#include <bits/stdc++.h>
using namespace std;
int func(int n ){
    if (n<=1){
        return n;
    }
    int prev =  func(n-1);
    int prev1=  func(n-2);
    return prev+prev1;
}
int main(){
    int n;
    cin >> n;
cout << func(n);
}