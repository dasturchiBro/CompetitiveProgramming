#include <iostream>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define GET(a) for(auto &it:a) cin >> it
#define en '\n'
void solve() {
 	string line;
 	cin >> line;
	ll counter = 1;
	ll max_val = 1;
	for(string::size_type i = 1; i < line.size(); i++) {
		if(line[i] == line[i-1]) {
			++counter;
		} else {
			max_val = max(counter, max_val);
			counter = 1;
		}
	}
	max_val = max(max_val, counter);
	cout << max_val << en;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
