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
#define IsOn(n, k)          ((n>>k) & 1)
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;
map<ll, ll>mp;
ll a[N], b[N];
set<ll>s;

string GetBinary(ll n){
    string ret = "";
    for(ll i = 31; i >= 0; i--) ret += to_string(IsOn(n, i));
    return ret;
}
// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution

int main()
{
    IO
    ll n, ans = 100000000000000, num_of_bits; cin >> n;
    if(n <= 74)  num_of_bits = 2;
    else if(n > 74 && n <= 7744) num_of_bits = 4;
    else if(n > 7744 && n <= 777444) num_of_bits = 6;
    else if(n > 777444 && n <= 77774444) num_of_bits = 8;
    else if(n > 77774444 && n <= 7777744444) num_of_bits = 10;
    else if(n > 7777744444 && n <= 777777444444) num_of_bits = 12;
    for(ll i = 1; i < (pow(2, (num_of_bits)) - 1); i++){
        ll num_of_1 = 0, num_of_0 = 0;
        string ret = "";
        for(ll j = 0; j < num_of_bits; j++){
            if(IsOn(i, j)){
                num_of_1++;
                ret += '4';
            }
            else{
                num_of_0++;
                ret += '7';
            }
        }
        if(num_of_0 == num_of_1){
            stringstream ss;
            ll same;
            ss << ret;
            ss >> same;
            if(same >= n) ans = min(ans, same);
        }
    }
    cout << ans << endll;
    return 0;
}
