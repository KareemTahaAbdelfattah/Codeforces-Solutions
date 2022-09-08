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
    vector<ll>v;
    ll n, k, cnt = 0; cin >> n >> k;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for(ll p = 2; p * p <= n; p++){
        if(prime[p] == true){
            for(ll i = p * p; i <= n; i += p) prime[i] = false;
        }
    }
    for(ll i = 2; i <= n; i++) if(prime[i]) v.push_back(i);
    sort(v.begin(), v.end());
    vector<ll>::iterator it1, it2;
    for(it1 = v.begin() + 5; it1 < v.end(); it1++){
        for(it2 = v.begin(); it2 < it1; it2++){
            if(*it2 + *(it2 + 1) + 1 == *it1){
                    cnt++;
                    break;
            }
        }
    }
    if(cnt >= k) cout << "YES";
    else cout << "NO";
    return 0;
}
