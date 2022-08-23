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
#define LightOn(n, k)       ((n) | (1<<k))
#define Lightoff(n, k)      ((n) & (~(1<<k)))
#define IsOn(n, k)          ((n>>k)&1)
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;
map<ll, ll>mp;
ll a[N], b[N];
set<ll>s;

// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution

int main()
{
    IO
    ll Tc; cin >> Tc;
    while(Tc--){
        mp.clear();
        ll n, ans = 0; cin >> n;
        fr1(i, n){
            cin >> a[i];
            if((a[i] >= pow(2, 0)) && (a[i] < pow(2, 1))) mp[1]++;
            if((a[i] >= pow(2, 1)) && (a[i] < pow(2, 2))) mp[2]++;
            if((a[i] >= pow(2, 2)) && (a[i] < pow(2, 3))) mp[3]++;
            if((a[i] >= pow(2, 3)) && (a[i] < pow(2, 4))) mp[4]++;
            if((a[i] >= pow(2, 4)) && (a[i] < pow(2, 5))) mp[5]++;
            if((a[i] >= pow(2, 5)) && (a[i] < pow(2, 6))) mp[6]++;
            if((a[i] >= pow(2, 6)) && (a[i] < pow(2, 7))) mp[7]++;
            if((a[i] >= pow(2, 7)) && (a[i] < pow(2, 8))) mp[8]++;
            if((a[i] >= pow(2, 8)) && (a[i] < pow(2, 9))) mp[9]++;
            if((a[i] >= pow(2, 9)) && (a[i] < pow(2, 10))) mp[10]++;
            if((a[i] >= pow(2, 10)) && (a[i] < pow(2, 11))) mp[11]++;
            if((a[i] >= pow(2, 11)) && (a[i] < pow(2, 12))) mp[12]++;
            if((a[i] >= pow(2, 12)) && (a[i] < pow(2, 13))) mp[13]++;
            if((a[i] >= pow(2, 13)) && (a[i] < pow(2, 14))) mp[14]++;
            if((a[i] >= pow(2, 14)) && (a[i] < pow(2, 15))) mp[15]++;
            if((a[i] >= pow(2, 15)) && (a[i] < pow(2, 16))) mp[16]++;
            if((a[i] >= pow(2, 16)) && (a[i] < pow(2, 17))) mp[17]++;
            if((a[i] >= pow(2, 17)) && (a[i] < pow(2, 18))) mp[18]++;
            if((a[i] >= pow(2, 18)) && (a[i] < pow(2, 19))) mp[19]++;
            if((a[i] >= pow(2, 19)) && (a[i] < pow(2, 20))) mp[20]++;
            if((a[i] >= pow(2, 20)) && (a[i] < pow(2, 21))) mp[21]++;
            if((a[i] >= pow(2, 21)) && (a[i] < pow(2, 22))) mp[22]++;
            if((a[i] >= pow(2, 22)) && (a[i] < pow(2, 23))) mp[23]++;
            if((a[i] >= pow(2, 23)) && (a[i] < pow(2, 24))) mp[24]++;
            if((a[i] >= pow(2, 24)) && (a[i] < pow(2, 25))) mp[25]++;
            if((a[i] >= pow(2, 25)) && (a[i] < pow(2, 26))) mp[26]++;
            if((a[i] >= pow(2, 26)) && (a[i] < pow(2, 27))) mp[27]++;
            if((a[i] >= pow(2, 27)) && (a[i] < pow(2, 28))) mp[28]++;
            if((a[i] >= pow(2, 28)) && (a[i] < pow(2, 29))) mp[29]++;
            if((a[i] >= pow(2, 29)) && (a[i] < pow(2, 30))) mp[30]++;
            if((a[i] >= pow(2, 30)) && (a[i] < pow(2, 31))) mp[31]++;
            if((a[i] >= pow(2, 31)) && (a[i] < pow(2, 32))) mp[32]++;
        }
        for(ll i = 1; i <= 32; i++) ans += ((mp[i] * (mp[i] - 1)) / 2);
        cout << ans << endll;
    }
    return 0;
}
