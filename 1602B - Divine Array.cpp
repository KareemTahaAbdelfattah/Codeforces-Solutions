/** ========================================**
 ** @Author: Kareem Taha Abdelfatah
 ** @Category: Codeforces problems solutions
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
const long long N = 2001, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;
map<ll, ll>mp;
ll a[N][N];

int main()
{
    IO
    ll tc; cin >> tc;
    while(tc--){
        ll n; cin >> n;
        for(int i = 0; i < n; i++) cin >> a[0][i];
        for(int i = 0; i < n; i++){
            mp.clear();
            for(int j = 0; j < n; j++) mp[a[i][j]]++;
            for(int j = 0; j < n; j++) a[i + 1][j] = mp[a[i][j]];
        }
        ll q; cin >> q;
        while(q--){
            ll x, k; cin >> x >> k;
            cout << a[min(k, n)][x - 1] << endll;
        }
    }
    return 0;
}
