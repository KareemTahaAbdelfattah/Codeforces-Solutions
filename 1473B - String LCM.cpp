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
map<char, ll>mp1, mp2;
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
    ll Tc; cin >> Tc;
    while(Tc--){
        string s1, s2; cin >> s1 >> s2;
        ll n1 = s1.size(), n2 = s2.size();
        string ret1 = "", ret2 = "";
        ll num1 = (n2 / __gcd(n1, n2)), num2 = (n1 / __gcd(n1, n2));
        while(num1--) ret1 += s1;
        while(num2--) ret2 += s2;
        if(ret1 == ret2) cout << ret1 << endll;
        else cout << -1 << endll;
    }
    return 0;
}
