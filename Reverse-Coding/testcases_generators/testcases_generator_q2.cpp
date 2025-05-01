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
    uniform_int_distribution<int> dist(1, 100000);

    int t = t_dist(gen);
    cout << t << endl;
    while(t--){
        int a = dist(gen);
        int b = dist(gen);
        int c = dist(gen);
        int d = dist(gen);
        cout << a << " " << b << " " << c << " " << d << endl;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    generate();
    return 0;
}