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
#define LightOn(n, k)       ((n) | (1<<k))
#define Lightoff(n, k)      ((n) & (~(1<<k)))
#define IsOn(n, k)          ((n>>k)&1)
const long long N = 1e6 + 5;
const long long MOD = 1e9 + 7, OO = 1e18;
const double PI = 3.14;
map<ll, ll>mp;
ll a[N], b[N];
set<ll>se;
typedef vector<ll>v1;

int main()
{
    IO
    ll n, m, k, cnt = 0, res = 0; cin >> n >> m >> k;
    for(ll i = 0; i < (m + 1); i++) cin >> a[i];
    for(ll i = 0; i < m; i++){
        cnt = 0;
        for(ll j = 0; j < 32; j++){
            if((IsOn(a[m], j) && !IsOn(a[i], j)) || (!IsOn(a[m], j) && IsOn(a[i], j))) cnt++;
        }
        if(cnt <= k) res++;
    }
    cout << res;
    return 0;
}

