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
#define fr(i, n)            for(ll i = 0; i < n; i++)
#define fr1(i, n)           for(ll i = 1; i <= n; i++)
#define asort(a)            sort(a + 1, a + n + 1)
#define dsort(a)            sort(a + 1, a + n + 1, greater<int>())
#define LightOn(n, k)       ((n) | (1<<k))
#define Lightoff(n, k)      ((n) & (~(1<<k)))
#define IsOn(n, k)          ((n>>k) & 1)
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;
map<string, ll>mp;
ll a[N], b[N];
set<ll>s;

string GetBinary(ll n){
    string ret = "";
    for(ll i = 31; i >= 0; i--) ret += to_string(IsOn(n, i));
    return ret;
}
// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution

int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        mp.clear();
        ll n, first = 0, sec = 0, third = 0; cin >> n;
        string a[3][n];
        for(ll i = 0; i < 3; i++){
            for(ll j = 0; j < n; j++){
                cin >> a[i][j];
                string s = a[i][j];
                mp[s]++;
            }
        }

        for(ll i = 0; i < 3; i++){
            for(ll j = 0; j < n; j++){
                string s = a[i][j];
                if((mp[s] == 1) && i == 0) first += 3;
                else if((mp[s] == 2) && i == 0) first += 1;
                else if((mp[s] == 3) && i == 0) first += 0;
                else if((mp[s] == 1) && i == 1) sec += 3;
                else if((mp[s] == 2) && i == 1) sec += 1;
                else if((mp[s] == 3) && i == 1) sec += 0;
                else if((mp[s] == 1) && i == 2) third += 3;
                else if((mp[s] == 2) && i == 2) third += 1;
                else if((mp[s] == 3) && i == 2) third += 0;
            }
        }

        cout << first << " " << sec << " " << third << endll;
    }
    return 0;
}
