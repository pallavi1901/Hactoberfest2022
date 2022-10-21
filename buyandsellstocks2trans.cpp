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

    int dpleft[n];
    int least = arr[0];
    int profit = 0;
    for(int i = 1; i < n; i++){
        least = min(least, arr[i]);
        profit = arr[i] - least;
        if(dpleft[i-1] > profit){
            dpleft[i] = dpleft[i-1];
        }
        else{
            dpleft[i] = profit;
        }
    }

    int dpright[n];
    int maxprice = arr[n-1];
    profit = 0;
    dpright[n-1] = 0;
    for(int i = n-2; i >= 0; i--){
        maxprice = max(maxprice, arr[i]);
        profit = maxprice - arr[i];
        if(dpright[i+1] > profit){
            dpright[i] = dpright[i+1];
        }
        else{
            dpright[i] = profit;
        }
    }

    int ans = dpleft[0] + dpright[0];
    for(int i = 1; i < n; i++){
        ans = max(ans, dpleft[i] + dpright[i]);
    }
    cout << ans << endl;
    return 0;
}
