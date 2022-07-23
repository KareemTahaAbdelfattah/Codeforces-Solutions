/** ========================================**
 ** @Author: Kareem Taha Abdelfatah
 ** @Category: Codeforces problems solutions
/** ========================================**/

#include<bits/stdc++.h>
using namespace std;
#define IO                  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endll               "\n"
#define ll                  long long
#define fr(i, n)            for(ll i = 0; i < n; i++)
#define fr1(i, n)           for(ll i = 1; i <= n; i++)
#define asort(a)            sort(a + 1, a + n + 1)
#define dsort(a)            sort(a + 1, a + n + 1, greater<int>())
const long long N = 2e5 + 5, MOD = 1e9 + 7, OO = 1e18;
const double PI = acos(-1);
 
ll a[N], b[N] ,q[N], s[N], w[N], xy[N], l, r, v, x, y, j;
string a1[N], b1[N];
map<string, long long>mp, mk;
set<long long>st;
 
int main()
{
    IO
    int Tc; cin >> Tc;
    while(Tc--){
        mp.clear();
        int n; cin >> n;
        fr1(i ,n){
            cin >> a1[i];
            mp[a1[i]] = 1;
        }
        for(int i = 1; i <= n; i++){
            bool ans = 0;
            for(int j = 1; j <= a1[i].size();j++){
                string s1 = a1[i].substr(0, j), s2 = a1[i].substr(j);
                if(mp[s1] && mp[s2]){
                    ans = 1;
                    cout << 1;
                    break;
                }
            }
            if(ans == 0) cout << 0;
        }
        cout << endll;
    }
    return 0;
}
