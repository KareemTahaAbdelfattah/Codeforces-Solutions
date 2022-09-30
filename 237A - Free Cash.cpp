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

int main()
{
    IO
    ll n, ans = 1; cin >> n;
    for(ll i = 0; i < n; i++){
        ll a, b; cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    for(ll i = 1; i < n; i++){
        ll sum = 0;
        if(v[i - 1].first == v[i].first && v[i - 1].second == v[i].second){
            sum = 2;
            for(ll j = i + 1; j < n; j++){
                if(v[j - 1].first == v[j].first && v[j - 1].second == v[j].second){
                    i++;
                    sum++;
                }
                else break;
            }
        }
        if(i == 1 && sum > 0) ans += (sum - 1);
        else if((sum > ans) && i != 1) ans = ans + (sum - ans);
    }
    cout << ans << endll;
    return 0;
}

