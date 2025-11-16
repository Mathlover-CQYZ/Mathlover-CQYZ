#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        vector<ll> S(n + 1, 0), T(n + 2, 0);
        for (int i = 1; i <= n; i++) {
            S[i] = S[i - 1] + a[i];
        }
        for (int i = n; i >= 1; i--) {
            T[i] = T[i + 1] + a[i];
        }
        string ans = "";
        for (int m = 1; m <= n - 1; m++) {
            if (S[m] > T[m + 1]) {
                ans += '1';
            } else {
                ans += '0';
            }
        }
        cout << ans << endl;
    }
    return 0;
}
