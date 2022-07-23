/** ========================================**
 ** @Author: Kareem Taha Abdelfatah
 ** @Category: Codeforces problems solutions
/** ========================================**/
 
#include<bits/stdc++.h>
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
 
ll a[N], b[N] ,q[N], s[N], w[N], xy[N], l, r, v, x, y, j;
string a1[N], b1[N];
char arr[N];
map<ll, ll>mp, mk;
set<ll>st;
 
int main()
{
    IO
    ll n, k; cin >> n >> k;
    ll ans = 0;
    ll l = 1, r = n, m;
    while(l <= r){
        m = (l + r) / 2;
        ll i = 0, summation = 0;
        while((m / pow(k, i)) != 0){
            summation += (m / pow(k, i));
            i++;
        }
        if(summation >= n) r = m - 1;
        else l = m + 1;
    }
    cout << r + 1;
    return 0;
}
