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
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;
map<char, ll>mp;
ll a[N], b[N];

int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        ll n, k, sum = 0; cin >> n >> k;
        fr1(i, n) cin >> a[i];
        fr1(i, n) cin >> b[i];
        sort(a + 1, a + n + 1);
        sort(b + 1, b + n + 1, greater <>());
        for(int i = 1; i <= k; i++){
            if(b[i] > a[i]) sum += b[i];
            else sum += a[i];
        }
        for(int i = k + 1; i <= n; i++) sum += a[i];
        cout << sum << endll;
    }
    return 0;
}
