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
#define LightOn(n, k)       ((n) | (1<<k))
#define Lightoff(n, k)      ((n) & (~(1<<k)))
#define IsOn(n, k)          ((n>>k)&1)
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;
map<ll, ll>mp;
ll a[N], b[N];
set<ll>s;

// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);

int main()
{
    IO
    ll Tc; cin >> Tc;
    for(ll i = 0; i < 32; i++) mp[pow(2, i)]++;
    while(Tc--){
        ll n, num = 1; cin >> n;
        if(mp[n] == 1) cout << n - 1 << endll;
        else{
            for(ll i = 1; i <= 31; i++){
                if(pow(2, i) > n) break;
                num = pow(2, i);
            }
            cout << num - 1 << endll;
        }
    }
    return 0;
}
