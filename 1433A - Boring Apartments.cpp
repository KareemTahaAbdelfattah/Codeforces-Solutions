/** ========================================**
 ** @Author: Kareem Taha Abdelfatah
 ** @Category: Codeforces problems solutions
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
map<char, ll>mp;
ll a[N], b[N];

int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        string x; cin >> x;
        ll ans = 0, first = 0, siz = x.size();
        stringstream ss;
        ss << x[0];
        ss >> first;
        if(siz == 1) ans += 1;
        else if(siz == 2) ans += 3;
        else if(siz == 3) ans += 6;
        else if(siz == 4) ans += 10;
        for(int i = 2; i <= first; i++) ans += 10;
        cout << ans << endll;
    }
    return 0;
}
