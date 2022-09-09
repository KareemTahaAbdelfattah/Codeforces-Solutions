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
ll a[N], b[N];
set<ll>s;

ll GCD(ll a, ll b){
    return (__gcd(a, b));
}

ll LCM(ll a, ll b){
    return ((a * b) / (GCD(a, b)));
}
// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution

int main()
{
    IO
    ll x, var1, var2, res1 = 1000000000000, res2, mx = 0, mn = 1000000000000; cin >> x;
    if(x == 1) cout << 1 << " " << 1;
    else if(x == 2) cout << 1 << " " << 2;
    else{
        for(ll i = 1; i*i <= x; i++){
            if(x % i == 0){
                var1 = i;
                var2 = x / i;
                if(LCM(var1, var2) == x){
                    mx = max(var1, var2);
                    mn = min(var1, var2);
                    res1 = min(res1, mx);
                    res2 = mn;
                }
            }
        }
        cout << res1 << " " << res2;
    }
    return 0;
}
