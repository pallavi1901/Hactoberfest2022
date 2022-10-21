#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    vector<vector<int>> dp(k+1, vector<int> (n));

    for(int i = 1; i <= k; i++){
        for(int j = 1; j < n; j++){
            int maxp = dp[i][j-1];
            for(int t = 0; t < j; t++){
                maxp = max(dp[i-1][t] + arr[j] - arr[t], maxp);
            }
            dp[i][j] = maxp;
        }
    }
    cout << dp[k][n-1] << endl;
    return 0;
}
