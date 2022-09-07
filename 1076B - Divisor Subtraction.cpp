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
    ll n, ans = 0; cin >> n;
    if(n % 2 != 0){
        for(ll i = 2; i*i <= n; i++){
            if(n % i == 0){
                n -= i;
                ans++;
                break;
            }
        }
    }
    for(ll i = 2; i*i <= n; i++){
        if(n % i == 0){
            ans += (n / i);
            break;
        }
    }
    if(ans == 0) cout << 1;
    else cout << ans;
    return 0;
}
