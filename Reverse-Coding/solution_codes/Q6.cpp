#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'


const int MOD = 1000000007;
const int inf = 1e18;
const int MAX_SIZE = 1e5 + 5;

void solve() {
    string str;

    cin >> str;

    string copy_str = str;
    sort(copy_str.begin(), copy_str.end());
    reverse(copy_str.begin(), copy_str.end());

    int N = str.length();
    int ans = 0;

    for(int i = 0 ; i < N ; i++){
        ans += (copy_str[i] != str[i]);
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