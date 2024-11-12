#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define GET(a) for(auto &it:a) cin >> it
#define en '\n'
void solve() {
    cin.ignore();
    vll arr(2);
    GET(arr);
    ll res = arr[0] * arr[0] - (arr[0] - 1);
    if(arr[0] > arr[1]) {
        res = res - (arr[0] - arr[1]);
        if(arr[0] % 2 == 0) {
            res = res + ((arr[0] - arr[1]) * 2);
        }
    } else if (arr[0] < arr[1]){
        res = arr[1] * (arr[1] - 2) + (arr[0] + 1);
        if(arr[1] % 2 != 0) {
            res = arr[1] * arr[1] - (arr[0] - 1);
        }
    }
    cout << res << en;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
