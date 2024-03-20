#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;                         
    cin >> T;
    while (T--) {
        int n;
        string s;
        char ch;
        cin >> n >> ch;
        cin >> s;

        set<int> green_signals_pos;
        for (int i = 0;i < n;i++) {
            if (s[i] == 'g') {
                green_signals_pos.insert(i + 1);
            }
        }

        int result = INT_MIN;
        for (int i = 0;i < n;i++) {
            if (s[i] == ch) {
                auto lb = green_signals_pos.lower_bound(i + 1);;
                if (lb != green_signals_pos.end()) {
                    int diff = (*lb - (i + 1));
                    result = max(result, diff);
                }
                else {
                    int x = n - (i + 1), y = *green_signals_pos.begin();
                    result = max(result, x + y);
                }
            }
        }
        cout << result << '\n';
    }
    return 0;
}