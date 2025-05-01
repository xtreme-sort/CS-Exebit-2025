#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int MOD = 1000000007;
const int inf = 1e18;
const int MAX_SIZE = 1e5 + 5;

void generate() {
    const std::string CHARACTERS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    const int CHARACTERS_SIZE = CHARACTERS.size();
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> t_dist(1, 100);
    uniform_int_distribution<int> ind_dist(0, CHARACTERS_SIZE - 1);

    int t = t_dist(gen);
    cout << t << endl;

    while(t--){
        string str;
        uniform_int_distribution<int> len_dist(1, 100);
        int len = len_dist(gen);
        for(int i = 0; i < len; i++){
            str += CHARACTERS[ind_dist(gen)];
        }
        cout << str << endl;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    generate();
    return 0;
}