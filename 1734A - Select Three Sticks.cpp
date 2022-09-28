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
set<ll>se;
vector<ll>v;

int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        v.clear();
        ll n, mn = 10000000000; cin >> n;
        for(ll i = 0; i < n; i++){
            ll num; cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        for(ll i = 1; i < (n - 1); i++){
            ll k = ((v[i + 1] - v[i]) + (v[i] - v[i - 1]));
            mn = min(mn, k);
        }
        cout << mn << endll;
    }
    return 0;
}
