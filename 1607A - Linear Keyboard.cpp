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
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;
map<ll, ll>mp;
//ll a[N], b[N];
set<ll>s;

int main()
{
    IO
    int Tc; cin >> Tc;
    while(Tc--){
        ll a[N];
        int t1 = 1, ans = 0;
        string s1, s2; cin >> s1 >> s2;
        for(int i = 0; i < s2.size(); i++){
            for(int j = 1; j <= s1.size(); j++){
                if(s2[i] == s1[j - 1]){
                    a[t1] = j;
                    t1++;
                    break;
                }
            }
            if(t1 > 2) ans += abs(a[t1 - 1] - a[t1 - 2]);
        }
        cout << ans << endll;
    }
    return 0;
}
