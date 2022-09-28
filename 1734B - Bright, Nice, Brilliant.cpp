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
ll a[N];
set<ll>se;
vector<ll>v;


int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        ll n; cin >> n;
        if(n == 1) cout << 1 << endll;
        else if(n == 2) cout << 1 << endll << 1 << " " << 1 << endll;
        else if(n >= 3){
            cout << 1 << endll << 1 << " " << 1 << endll;
            for(ll i = 3; i <= n; i++){
                for(ll j = 1; j <= i; j++){
                    if(j == 1 || j == i) cout << 1 << " ";
                    else cout << 0 << " ";
                }
                cout << endll;
            }
        }
    }
    return 0;
}
