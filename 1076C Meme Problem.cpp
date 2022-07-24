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

ll a[N], b[N] ,q[N], s[N], w[N], xy[N], l, r, v, x, y, j;
string a1[N], b1[N];
char arr[N];
map<ll, ll>mp, mk;
set<ll>st;

int main()
{
    IO
    int Tc; cin >> Tc;
    while(Tc--){
        bool ok = 0;
        double n; cin >> n;
        double l = 0, r = n, mid;
        int p = 100;
        while(p--){
            mid = (l + r) / 2;
            if(abs(n - mid * (n - mid)) <= 1e-7){
                ok = 1;
                break;
            }
            else if(mid * (n - mid) > n) r = mid - 0.000000001;
            else if (mid * (n - mid) < n) l = mid + 0.000000001;
            //cout << "Y" << " " << fixed << setprecision(9) << n - mid << " " << mid << endll;
        }
        if(ok) cout << "Y" << " " << fixed << setprecision(9) << n - mid << " " << mid << endll;
        else cout << "N" << endll;
    }
    return 0;
}
