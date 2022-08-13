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
map<ll, ll>mp;
ll a[N], b[N];

int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        ll n, mn1 = 1e10, mn2 = 1e10, ans = 0; cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            mn1 = min(a[i], mn1);
        }
        for(int i = 1; i <= n; i++){
            cin >> b[i];
            mn2 = min(b[i], mn2);
        }
        for(int i = 1; i <= n; i++){
            if((a[i] > mn1) && (b[i] > mn2)){
                ll xx;
                xx = min((a[i] - mn1), (b[i] - mn2));
                ans += xx;
                a[i] -= xx;
                b[i] -= xx;
                if(a[i] > mn1) ans += (a[i] - mn1);
                if(b[i] > mn2) ans += (b[i] - mn2);
            }
            else if(a[i] > mn1) ans += (a[i] - mn1);
            else if(b[i] > mn2) ans += (b[i] - mn2);
        }
        cout << ans << endll;
    }
    return 0;
}
