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
    int n, m; cin >> n >> m;
    int ok = 1, r = 1;
    while(n--){
        if(r % 2 != 0){
            fr1(i, m) cout << '#';
            cout << endll;
            r++;
        }
        else if(r % 2 == 0){
            if(ok == 1){
                fr1(i, m) {
                    if(i != m) cout << '.';
                    else cout << '#' << endll;
                }
                ok = 0;
            }
            else if(ok == 0){
                fr1(i, m) {
                    if(i == 1) cout << '#';
                    else cout << '.';
                }
                cout << endll;
                ok = 1;
            }
            r++;
        }
    }
    return 0;
}
