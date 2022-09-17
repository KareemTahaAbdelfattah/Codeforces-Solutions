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
ll a[N];
set<ll>s;

int main()
{
    IO
    ll n, ans1 = 0, ans2 = 0, ans3 = 0; cin >> n;
    while(n--){
        ll x, y, z; cin >> x >> y >> z;
        ans1 += x;
        ans2 += y;
        ans3 += z;
    }
    if(ans1 == 0 && ans2 == 0 && ans3 == 0) cout << "YES";
    else cout << "NO";
    return 0;
}
