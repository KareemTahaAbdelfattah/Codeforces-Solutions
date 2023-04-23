/** ========================================**
 ** @Author: Kareem Taha Abdelfatah
 ** @Category: Codeforces problems solutions
 ** @brief: Problem Solving solutions
/** ========================================**/

#include<bits/stdc++.h>
#include <iomanip>
#include<iterator>
using namespace std;
#define IO                  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endll               "\n"
#define ll                  long long
#define LightOn(n, k)       (n | (1<<k))
#define Lightoff(n, k)      (n & (~(1<<k)))
#define IsOn(n, k)          ((n>>k)&1)
const long long N = 2e5 + 5;
const double PI = 3.14;
const double Prox = 1e-7;
const long long negative_inf = 1e-18;
map<char, ll>mp1, mp2;
ll a[N], b[N];
set<ll>s;

ll GCD(ll a, ll b){
    return (__gcd(a, b));
}

ll LCM(ll a, ll b){
    return ((a * b) / (GCD(a, b)));
}
// right shift n = num / pow(2, n);
// left shift n = num * pow(2, n);
// sleep(micro second); for slow execution

ll ans, sz, x, res;
double n;

void pow_sum(ll idx, ll sm){
    if(idx == sz){
        if(sm == x) ans++;
        return;
    }
    res = sm + (ll)pow(a[idx], n);
    if(res <= x) pow_sum(idx + 1, res);
    pow_sum(idx + 1, sm);
}

int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        ll n, odd = 0, even = 0, mov = 0; cin >> n;
        bool t = false;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 2) odd++;
            else even++;

            if((i == 0 || i % 2 == 0) && (a[i] % 2)) mov++;
            if((i % 2 == 1) && (a[i] % 2 == 0)) mov++;
        }
        if((n % 2) && (even == odd + 1)) t = true;
        else if((n % 2 == 0) && (even == odd)) t= true;
        else t = false;

        if(t){
            if(mov % 2) cout << mov - 1 << endll;
            else cout << mov / 2 << endll;
        }
        else{
            cout << "-1" << endll;
        }
    }
    return 0;
}
