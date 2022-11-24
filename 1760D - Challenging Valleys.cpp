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
#define LightOn(n, k)       ((n) | (1<<k))
#define Lightoff(n, k)      ((n) & (~(1<<k)))
#define IsOn(n, k)          ((n>>k)&1)
const long long N = 1e6 + 5;
const long long MOD = 1e9 + 7, OO = 1e18;
const double PI = 3.14;
map<ll, ll>mp;
ll a[N], b[N];
set<ll>se;
typedef vector<ll>v1;

/*ll GCD(ll a, ll b){
    return (__gcd(a, b));
}

ll LCM(ll a, ll b){
    return ((a * b) / (GCD(a, b)));
}*/
// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution
/*bool isPrime(ll n){
    for(ll i = 2; i*i <= n; i++) if(n % i == 0) return 0;
    return 1;
}

bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}


bool sortbyCond1(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second > b.second);
}*/

int main()
{
    IO
    ll q; cin >> q;
    while(q--){
        ll n, cnt = 0; cin >> n;
        v1 a(n), temp;
        for(ll i = 0; i < n; i++) cin >> a[i];
        temp.push_back(a[0]);
        for(ll i = 1; i < n; i++){
            if(a[i] == temp.back()) continue;
            else temp.push_back(a[i]);
        }
        if(temp.size() == 1){
            cout << "YES\n";
            continue;
        }
        if(temp[0] < temp[1]) cnt++;
        if(temp.back() < temp[temp.size() - 2]) cnt++;
        for(ll i = 1; i < (temp.size() - 1) && cnt < 2; i++){
            if(temp[i - 1] > temp[i] && temp[i] < temp[i + 1]) cnt++;
        }
        cout << ((cnt == 1)? "YES\n" : "NO\n");

    }
    return 0;
}

