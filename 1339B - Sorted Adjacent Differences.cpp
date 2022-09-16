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
const long long N = 2e5 + 5;
const double PI = 3.14;
const double Prox = 1e-7;
map<ll, ll>mp;
ll a[N];
set<ll>s;

int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        vector<ll>(v);
        ll n, neg = 0, pos = 0; cin >> n;
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        ll l = 0, r = n - 1;
        while(r > l){
            v.push_back(a[r]);
            v.push_back(a[l]);
            r--;
            l++;
        }
        if(n % 2 != 0) v.push_back(a[n / 2]);
        reverse(v.begin(), v.end());
        for(ll i = 0; i < n; i++) cout << v[i] << " ";
        cout << endll;
    }
    return 0;
}
