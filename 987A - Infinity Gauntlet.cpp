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
map<ll, pair<string, string>>mp;
string a[N], b[N];
set<ll>se;
vector<pair<ll, ll>>v;

int main()
{
    IO
    mp[0].first = "purple";
    mp[0].second = "Power";
    mp[1].first = "green";
    mp[1].second = "Time";
    mp[2].first = "blue";
    mp[2].second = "Space";
    mp[3].first = "orange";
    mp[3].second = "Soul";
    mp[4].first = "red";
    mp[4].second = "Reality";
    mp[5].first = "yellow";
    mp[5].second = "Mind";
    ll n, k = 0; cin >> n;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++){
        ll flag = 0, m = 0;
        for(ll j = 0; j < mp.size(); j++){
            if(a[i] == mp[j].first){
                mp.erase(j);
                k++;
                break;
            }
        }
    }
    cout << 6 - k << endll;
    for(ll i = 0; i < 6; i++) if(mp[i].second != "") cout << mp[i].second << endll;
    return 0;
}

