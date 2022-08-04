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
map<ll, ll>mp, mk;
set<ll>st;
pair<int, int> arr[N];

struct point{
    int x;
    int y;
};

// true (not swap).
// false (swap).
bool cmp(point a, point b){
    if(a.x == b.x){
        return a.y < b.y;
    }
    else return a.x < b.x;
};


int main()
{
    IO
    int Tc; cin >> Tc;
    while(Tc--){
        mp.clear();
        int n, m, i = 1, mov = 0; cin >> n >> m;
        cin >> a[i];
        mp[i] = a[i];
        i++;
        for(int i = 2; i <= m; i++){
            cin >> a[i];
            for(int z = 1; z < i; z++) if(mp[z] < a[i]) mov++;
            mp[i] = a[i];
        }
        cout << mov << endll;
    }
    return 0;
}
