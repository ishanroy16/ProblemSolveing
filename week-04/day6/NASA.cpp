#include <bits/stdc++.h>
using namespace std;
const int max_N = (1 << 15);
vector<int> all_palindromes;

void mark_palindrome() {
    for (int i = 0;i < max_N;i++) {
        string s = to_string(i);
        int len = s.length();
        bool yes = true;
        for (int i = 0;i < (len / 2);i++) {
            if (s[i] != s[len - i - 1]) {
                yes = false;
                break;
            }
        }
        if (yes) {
            all_palindromes.push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    mark_palindrome();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> count(max_N);
        vector<int>v;
        for (int i = 0;i < n;i++) {
            int x;
            cin >> x;
            count[x]++;
            v.push_back(x);
        }

        long long ans = n;

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < all_palindromes.size();j++) {
                int curr = (v[i] ^ all_palindromes[j]);
                ans += count[curr];
            }
        }

        cout << (ans / 2) << '\n';
    }
    return 0;
}