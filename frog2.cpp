#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)cin >> a[i];
    int dp[n];
    dp[0] = 0;
    for(int i = 1; i < n; i++){
        int cur = INT_MAX;
        for(int j = i-1; (i-j) <= k && j >= 0; j--){
            cur = min(cur, dp[j] + abs(a[j]-a[i]));
        }
        dp[i] = cur;
    }
    cout << dp[n-1] << "\n";
}
