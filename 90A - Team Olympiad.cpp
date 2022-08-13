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
map<ll, ll>mp;
ll a[N], b[N];

int main()
{
    IO
    ll n, ans = 0; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    ans = min({mp[1], mp[2], mp[3]});
    mp[1] = ans, mp[2] = ans, mp[3] = ans;
    cout << ans << endll;
    while(ans--){
        int flag1 = 0, flag2 = 0;
        for(int i = 1; i <= 3; i++){
            for(int j = 1; j <= n; j++){
                if(mp[1] > 0 && a[j] == 1 && flag1 == 0){
                    cout << j << " ";
                    a[j] = 0;
                    mp[1]--;
                    flag1 = 1;
                    break;
                }
                else if(mp[2] > 0 && a[j] == 2 && flag1 == 1 && flag2 == 0){
                    cout << j << " ";
                    a[j] = 0;
                    mp[2]--;
                    flag2 = 1;
                    break;
                }
                else if(mp[3] > 0 && a[j] == 3 && flag2 == 1){
                    cout << j << " ";
                    a[j] = 0;
                    mp[3]--;
                    break;
                }
            }
        }
        cout << endll;
    }
    return 0;
}
