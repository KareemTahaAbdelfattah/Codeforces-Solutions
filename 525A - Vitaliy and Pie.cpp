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
int i = 0;
bool cmp(string a, string b){
    if(i == 0 || i % 2 == 0){
        if(b[i] == a[i]){
            i++;
            return b[i] > a[i];
        }
        else return a[i] > b[i];
    }
    else{
        if(b[i] == a[i]){
            i++;
            return a[i] > b[i];
        }
        else return b[i] > a[i];
    }
};


int main()
{
    IO
    vector<char>v;
    int n, ans = 0; cin >> n;
    fr1(i, 2 * (n - 1)){
        char kk; cin >> kk;
        v.push_back(kk);
    }
    vector<char>::iterator it;
    for(it = v.begin(); it < v.end(); it += 2){
        char c1 = *it, c2 = tolower(*(it + 1));
        //cout << c1 << " " << c2 << " ";
        if(c1 != c2){
            if(mp[c2] == 0){
                mp[c1]++;
                ans++;
            }
            else{
                mp[c2]--;
                mp[c1]++;
            }
        }
    }
    cout << ans;
    return 0;
}
