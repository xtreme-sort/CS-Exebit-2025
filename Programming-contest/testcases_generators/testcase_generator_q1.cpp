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

    uniform_int_distribution<int> t_dist(1, 1000);
    uniform_int_distribution<int> n_dist(1, 2* 1e5);
    uniform_int_distribution<int> x_dist(0, 1e9);

    int t = t_dist(gen);
    cout << t << endl;

    while(t--){
        int n = n_dist(gen);
        cout << n << endl;

        for(int i = 0; i < n ; i++){
            int x = x_dist(gen);
            cout << x << " ";
        }
        cout << endl;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    generate();
    return 0;
}