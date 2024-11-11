#include <iostream>
#define ll long long
using namespace std;
int main() {
    ll n;
    cin >> n;
    if(n > 1 and n < 4) {
        cout << "NO SOLUTION";
    }
    else {
        for(ll i = 2; i < n + 1; i+=2) {
            cout << i << " ";
        }
        for(ll i = 1; i < n + 1; i+=2) {
            cout << i << " ";
        }
    }
    return 0;
}