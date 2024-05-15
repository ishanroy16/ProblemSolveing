#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
bool isPrime(long long n) {
    if (n == 1) {
        return false;
    }

    for (long long i = 2;i * i <= n;i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool perfect(long long n) {
    long long x = sqrtl(n);
    return (x * x) == n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }

    for (int i = 0;i < n;i++) {
        if (isPrime(sqrtl(arr[i])) && perfect(arr[i])) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }   
    return 0;
}