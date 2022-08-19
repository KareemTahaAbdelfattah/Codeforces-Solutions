/** ========================================**
 ** @Author: Kareem Taha Abdelfatah
 ** @Category: Codeforces problems solutions
 ** @brief: Problem Solving solutions
/** ========================================**/

#include<bits/stdc++.h>
#include<iterator>
using namespace std;
#define IO                  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endll               "\n"
#define ll                  long long
#define fr(i, n)            for(ll i = 0; i < n; i++)
#define fr1(i, n)           for(ll i = 1; i <= n; i++)
#define asort(a)            sort(a + 1, a + n + 1)
#define dsort(a)            sort(a + 1, a + n + 1, greater<int>())
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;
map<ll, ll>mp;
char a[N], b[N];

int main()
{
    IO
    int Tc; cin >> Tc;
    while(Tc--){
        pair<int, int>s[N];
        int n, ans = 0; cin >> n;
        fr1(i, n) cin >> s[i].first >> s[i].second;
        sort(s + 1, s + n + 1);
        fr1(i, n) ans += (abs(s[i].first - s[i - 1].first) + abs(s[i].second - s[i - 1].second));
        ans += (abs(s[n].first - 0) + abs(s[n].second - 0));
        cout << ans << endll;
    }
    return 0;
}
