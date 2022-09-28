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
ll a[N];
set<ll>se;
vector<ll>v;

int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        ll n, k, flag = 0; cin >> n >> k;
        a[0] = a[n + 1] = 0;
        for(ll i = 1; i <= n; i++) cin >> a[i];
        ll i = k - 1, j = k + 1;
        while(i >= 0 && j <= n + 1 && flag == 0){
            while(i > 0 && a[i] < 0 && (a[i] + a[k] >= 0)){
                    a[i - 1] += a[i];
                    i--;
            }
            while(j < n + 1 && a[j] < 0 && (a[j] + a[k] >= 0)){
                    a[j + 1] += a[j];
                    j++;
            }
            if((max(a[i], a[j]) + a[k]) < 0){
                flag = 1;
                break;
            }
            if(a[i] > a[j]) a[k] += a[i--];
            else a[k] += a[j++];
        }
        if(flag) cout << "NO" << endll;
        else cout << "YES" << endll;
    }
    return 0;
}
