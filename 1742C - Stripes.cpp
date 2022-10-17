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
char a1[8][8];

int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        ll r = 0;
        for(ll i = 0; i < 8; i++) for(ll j = 0; j < 8; j++) cin >> a1[i][j];
        for(ll i = 0; i < 8; i++){
            for(ll j = 0; j < 8; j++){
                if(a1[i][j] == 'R') r++;
            }
            if(r == 8) break;
            else r = 0;
        }
        if(r == 8) cout << 'R' << endll;
        else cout << 'B' << endll;
    }
    return 0;
}

