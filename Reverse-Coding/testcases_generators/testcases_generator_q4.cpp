#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int MOD = 1000000007;
const int inf = 1e18;
const int MAX_SIZE = 1e5 + 5;

void generate() {
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> t_dist(1, 100);

    int t = t_dist(gen);
    cout << t << endl;


    while(t--){
        uniform_int_distribution<int> n_dist(1, 100000);

        int n = n_dist(gen);
        cout << n << endl;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    generate();
    return 0;
}