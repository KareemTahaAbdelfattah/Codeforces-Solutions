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
//const double PI = 3.14;
//const double Prox = 1e-7;
//map<char, ll>mp1, mp2;
ll a[N];
//set<ll>s;

ll GCD(ll a, ll b){
    return (__gcd(a, b));
}

ll LCM(ll a, ll b){
    return ((a * b) / (GCD(a, b)));
}
// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution
bool isPrime(ll n){
    for(ll i = 2; i*i <= n; i++) if(n % i == 0) return 0;
    return 1; 
}

int main()
{
    IO
    ll n, ans = 0; cin >> n;
    if(isPrime(n)) cout << 1;
    else if((n % 2 == 0) || isPrime(n - 2)) cout << 2;
    else cout << 3;
    return 0;
}
