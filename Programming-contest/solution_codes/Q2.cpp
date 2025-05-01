#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'


template<typename T_vector>
void array_input(T_vector &v, int n) {
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

template<typename T_vector>
void array_output(const T_vector &v, bool add_one = false, int start = -1, int end = -1) {
    if (start < 0) start = 0;
    if (end < 0) end = int(v.size());
    for (int i = start; i < end; i++)
        cout << v[i] + (add_one ? 1 : 0) << (i < end - 1 ? ' ' : '\n');
}

const int MOD = 1000000007;
const int inf = 1e18;
const int MAX_SIZE = 1e5 + 5;

void solve() {
    int N;
    cin >> N;

    if(N & 1) cout << "K" << endl;
    else cout << "Y" << endl;
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