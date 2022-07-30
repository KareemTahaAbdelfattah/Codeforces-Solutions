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
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;

ll a[N], b[N] ,q[N], s[N], w[N], xy[N], l, r, v, x, y, j;
string a1[N], b1[N];
char arr[N];
map<ll, ll>mp1, mk, mp2;
set<ll>st;

int main()
{
    IO
    vector<char>v;
    int Tc; cin >> Tc;
    while(Tc--){
        v.clear();
        string n, s; cin >> n;
        s += n[0];
        for(ll i = 1; i < n.size() - 1; i++){
            if(n[i] == n[i - 1]){
                s += n[i];
                i++;
            }
        }
        s += n[n.size() - 1];
        cout << s << endll;
    }
    return 0;
}
