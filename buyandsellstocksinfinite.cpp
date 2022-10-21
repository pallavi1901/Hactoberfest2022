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
    int selling_date = 0;
    int buying_date = 0;

    for(int i = 1; i < n; i++){
        if(stock_price[i] >= stock_price[i-1]){
            selling_date++;
        }
        else{
            profit += stock_price[selling_date] - stock_price[buying_date];
            buying_date = selling_date = i;
        }
    }
    profit += stock_price[selling_date] - stock_price[buying_date];
    cout << profit << endl;
    return 0;
}
