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
//#define LightOn(n, k)       ((n) | (1<<k))
//#define Lightoff(n, k)      ((n) & (~(1<<k)))
//#define IsOn(n, k)          ((n>>k)&1)
const long long N = 2e5 + 5;
//const double PI = 3.14;
//const double Prox = 1e-7;
map<ll, ll>mp1, mp2, mp3;
ll a[N], b[N];
set<ll>s;

// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution


int main()
{
    IO
    ll a, b; cin >> a >> b;
    ll n, flag = 0; cin >> n;
    while(n--){
        ll ans = __gcd(a, b);
        ll l, h; cin >> l >> h;
        if(l > ans) cout << -1 << endll;
        else if(ans >= l && ans <= h) cout << ans << endll;
        else{
            ll ans2 = -1;
            if(flag == 0){
                for(ll i = 2; i*i <= ans; i++){
                    if(ans % i == 0){
                        s.insert(ans / i);
                        s.insert(i);
                    }
                }
                s.insert(1);
                flag = 1;
            }
            set<ll>::reverse_iterator itr;
            for(auto itr = s.rbegin(); itr != s.rend(); itr++){
                if(*itr >= l && *itr <= h){
                    ans2 = *itr;
                    break;
                }
            }
            cout << ans2 << endll;
        }
    }
    return 0;
}
