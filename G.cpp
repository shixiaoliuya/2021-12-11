#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int _; cin >> _;
    while (_--) {
        int n, d;
        cin >> n >> d;
        vector<int> tiles(n), fig(4);
        for (auto &x : tiles) cin >> x;
        sort(tiles.begin(), tiles.end());
        auto tap = [&](int tile) {
            for (int i = 0; i < 4; ++i)
                if (fig[i] <= tile) {
                    fig[i] = tile + d;
                    return i + 1;
                }
            return -1;
        };
        auto check = [&]() {
            int max_num = 1;
            for (auto &x: tiles) {
                int res = tap(x);
                if (res == -1) return -1;
                max_num = max(res, max_num);
            }
            return max_num;
        };
        cout << check() << endl;
    }
    return 0;
}
