#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int MOD = 1000000007;
const int inf = 1e18;
const int MAX_SIZE = 1e5 + 5;

void solve() {
    int N;
    cin >> N;

    vector<int> A(N);
    for(int i = 0 ; i < N ; i++){
        cin >> A[i];
    }

    int xor_sum = A[0];

    for(int i = 1; i < N ; i++){
        xor_sum = (xor_sum ^ A[i]);
    }

    if(xor_sum == 0){
        cout << pow(2, N) << endl;
    }
    else{
        cout << 1 << endl;
    }

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