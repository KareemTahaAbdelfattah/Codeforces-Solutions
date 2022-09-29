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
vector<ll>v;

int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        ll n, flag = 0; cin >> n;
        for(ll i = 0; i < n; i++) cin >> a[i];
        b[0] = a[0];
        for(ll i = 1; i < n; i++){
            ll n1 = a[i] + b[i - 1];
            b[i] = n1;
            if(a[i] + b[i - 1] != b[i - 1] - a[i] && b[i - 1] - a[i] >= 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1) cout << -1 << endll;
        else{
            for(ll i = 0; i < n; i++) cout << b[i] << " ";
            cout << endll;
        }
    }
    return 0;
}
