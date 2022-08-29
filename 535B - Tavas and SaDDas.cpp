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
    vector<ll>v;
    v.push_back(4);
    v.push_back(7);
    ll num_of_bits = 2;
    while(num_of_bits <= 10){
        for(ll i = 0; i <= (pow(2, num_of_bits) - 1) ; i++){
            string ret = "";
            for(ll j = 0; j < num_of_bits; j++){
                if(IsOn(i, j)) ret += '7';
                else ret += '4';
            }
            ll num;
            stringstream ss;
            ss << ret;
            ss >> num;
            v.push_back(num);
        }
        num_of_bits++;
    }
    ll n; cin >> n;
    sort(v.begin(), v.end());
    vector<ll>::iterator lower;
    lower = std::lower_bound(v.begin(), v.end(), n);
    cout << (lower - v.begin() + 1) << endll;
    //cout << v[(lower - v.begin())] << endll;
    return 0;
}
