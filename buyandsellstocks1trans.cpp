#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int stock_price[n];
    for(int i = 0; i < n; i++){
        cin >> stock_price[i];
    }

    int profit = 0;
    int max_profit = 0;
    int least_price = INT_MAX;

    for(int i = 0; i < n; i++){
        least_price = min(least_price, stock_price[i]);
        profit = stock_price[i] - least_price;
        max_profit = max(max_profit, profit);
    }
    cout << max_profit << endl;
    return 0;
}
