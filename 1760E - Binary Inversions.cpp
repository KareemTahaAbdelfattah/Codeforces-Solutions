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
vector<pair<ll, ll>>v;

/*ll GCD(ll a, ll b){
    return (__gcd(a, b));
}

ll LCM(ll a, ll b){
    return ((a * b) / (GCD(a, b)));
}*/
// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution
/*bool isPrime(ll n){
    for(ll i = 2; i*i <= n; i++) if(n % i == 0) return 0;
    return 1;
}

bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}


bool sortbyCond1(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second > b.second);
}*/

int main()
{
    IO
    ll q; cin >> q;
    while(q--){
        ll n, ans = 0, cnt = 0, mx = 0, one = 0, zero = 0; cin >> n;
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = n - 1; i >= 0; i--){
            if(a[i] == 0){
                cnt++;
                zero = (i + 1);
            }
            else{
                ans += cnt;
                if(one == 0) one = (i + 1);
            }
        }
        mx = max(mx, ans);
        cnt = 0, ans = 0;
        if(zero > 0){
            a[zero - 1] = 1;
            for(ll i = n - 1; i >= 0; i--){
                if(a[i] == 0) cnt++;
                else ans += cnt;
            }
            mx = max(mx, ans);
            cnt = 0, ans = 0;
            a[zero - 1] = 0;
        }
        if(one > 0){
            a[one - 1] = 0;
            for(ll i = n - 1; i >= 0; i--){
                if(a[i] == 0) cnt++;
                else ans += cnt;
            }
            mx = max(mx, ans);
        }
        cout << mx << endll;
    }
    return 0;
}

