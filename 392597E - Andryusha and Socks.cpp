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
map<char, ll>mp, mk;
set<ll>st;
pair<string, string> arr[N];

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
    vector<int>v;
    int n, ans = 1; cin >> n;
    fr1(i , 2 * n) cin >> a[i];
    v.push_back(a[1]);
    for(int i = 2; i <= 2 * n; i++){
        vector<int>::iterator it;
        it = std::find (v.begin(), v.end(), a[i]);
        if (it != v.end()) v.erase(it);
        else{
            v.push_back(a[i]);
            int k = v.size();
            ans = max(ans, k);
        }
    }
    cout << ans << endll;
    return 0;
}
