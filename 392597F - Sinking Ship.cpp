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
    deque<string>dq;
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i].first >> arr[i].second;
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1) if(arr[j].second == "rat") dq.push_front(arr[j].first);
            if(i == 2) if(arr[j].second == "woman" || arr[j].second == "child") dq.push_front(arr[j].first);
            if(i == 3) if(arr[j].second == "man") dq.push_front(arr[j].first);
            if(i == 4) if(arr[j].second == "captain") dq.push_front(arr[j].first);
        }
    }
    deque<string>::iterator it;
    for(it = dq.end() - 1; it >= dq.begin(); it--) cout << *it << endll;
    return 0;
}
