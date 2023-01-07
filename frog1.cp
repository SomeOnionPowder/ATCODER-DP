#include <bits/stdc++.h>
using namespace std;
int main(){
  int n; cin >> n;
  int dp[n]; int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
    dp[i] = INT_MAX;
  }dp[0] = 0; 
  for(int i = 0; i < n; i++){
    //jump to i+1
    if(i<n-1)dp[i+1] = min(dp[i+1], dp[i]+abs(a[i+1]-a[i]));
    //jump to i+2
    if(i<n-2)dp[i+2] = min(dp[i+2], dp[i]+abs(a[i+2]-a[i]));
  }
  cout << dp[n-1] << "\n";
}
