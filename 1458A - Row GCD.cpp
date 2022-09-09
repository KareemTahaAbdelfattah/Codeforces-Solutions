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
    ll n, m; cin >> n >> m;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];
    sort(a, a + n);
    if(n == 1 && m >= 1) for(ll i = 0; i < m; i++) cout << b[i] + a[0] << " ";
    else if(n == 2){
        for(ll i = 0; i < m; i++){
            ll num = __gcd((a[0] + b[i]), (a[1] - a[0]));
            cout << num << " ";
        }
    }
    else{
        ll num = __gcd((a[1] - a[0]), (a[2] - a[0]));
        for(ll i = 3; i < n; i++) num = __gcd(num, (a[i] - a[0]));
        for(ll i = 0; i < m; i++){
            ll num2 = __gcd((b[i] + a[0]), num);
            cout << num2 << " ";
        }
    }
    return 0;
}
