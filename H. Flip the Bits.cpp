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
    ll Tc; cin >> Tc;
    while(Tc--){
        ll n, res = 0; cin >> n;
        if(n % 2 == 0){
            for(ll i = 0; i < 32; i++){
                if(IsOn(n, i)) break;
                else res++;
            }
            cout << res + 1 << endll;
        }
        else cout << "1\n";
    }
    return 0;
}

