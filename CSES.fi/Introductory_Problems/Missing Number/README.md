#include <iostream>
#include <algorithm>
#include <vector>
#define vi vector<int>
#define vll vector<long long>
#define ll long long
#define GET(a) for(auto &it:a) cin >> it
#define en "\n"
#define IGNORE cin.ignore()
using namespace std;
void solve(ll n) {
    ll S = n*(n+1) / 2;
    IGNORE;
    vll arr(n - 1);
    GET(arr);
    ll sum = 0;
    for(ll i : arr) sum += i;
    cout << S - sum << en;
}

int main() {
    ll n;
    cin >> n;
    solve(n);
    return 0;
}

