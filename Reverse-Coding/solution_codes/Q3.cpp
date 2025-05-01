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

    int N = str.length();
    int ans = 0;
    for(int i = 0 ; i < N ; i++){
        if(str[i] <= '9' and str[i] >= '0') ans += (str[i] - '0') * (i + 1);
        else if(str[i] <= 'z' and str[i] >= 'a') ans += (str[i] - 'a' + 1) * (i + 1);
        else if(str[i] <= 'Z' and str[i] >= 'A') ans += (str[i] - 'A' + 1) * (i + 1);
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