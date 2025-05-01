#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'


const int MOD = 1000000007;
const int inf = 1e18;
const int MAX_SIZE = 1e5 + 5;

void solve() {
    int n;
    cin >> n;

    int ans = 0;

    while(n){
        ans += ((n % 3) == 1);
        n /= 3;
    }

    cout << ans << endl;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}