#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define GET(a) for(auto &it:a) cin >> it
#define en '\n'
int weirdAlgo(ll n) {
    cout << n << " ";
    if(n == 1) return n;
    if(n % 2 == 0) {
        n = n / 2;
    } else {
        n = n * 3 + 1;
    }
    return weirdAlgo(n); 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    weirdAlgo(n);
    return 0;
}
