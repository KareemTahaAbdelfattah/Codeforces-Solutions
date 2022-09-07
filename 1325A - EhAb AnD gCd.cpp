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
    ll Tc; cin >> Tc;
    while(Tc--){
        ll x; cin >> x;
        if(x == 2) cout << 1 << " " << 1 << endll;
        else if(x % 2 == 0) cout << 2 << " " << x - 2 << endll;
        else cout << 1 << " " << x - 1 << endll;
    }
    return 0;
}
