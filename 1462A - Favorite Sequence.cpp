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
    ll tc; cin >> tc;
    while(tc--){
        vector<ll>v;
        ll n; cin >> n;
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll l = 0, r = n - 1;
        while(r >= l){
            //cout << a[l] << " " << a[r] << " ";
            v.push_back(a[l]);
            v.push_back(a[r]);
            l++;
            r--;
        }
        //cout << endll;
        for(ll i = 0; i < n; i++) cout << v[i] << " ";
        cout << endll;
    }
    return 0;
}
