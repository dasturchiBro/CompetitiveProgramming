#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define GET(a) for(auto &it:a) cin >> it
#define en '\n'
void solve(ll n) {
	cin.ignore();
	vll arr(n);
	GET(arr);
	ll counter = 0;
	for(ll i = 1; i < n; i++) {
		if(arr[i] < arr[i-1]) {
			counter += arr[i-1] - arr[i];
			swap(arr[i-1], arr[i]);
		}
	} // INCREASING	ARRAY
	cout << counter <<	en;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    solve(n);
    return 0;
}
