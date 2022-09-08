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
//#define LightOn(n, k)       ((n) | (1<<k))
//#define Lightoff(n, k)      ((n) & (~(1<<k)))
//#define IsOn(n, k)          ((n>>k)&1)
const long long N = 2e5 + 5;
//const double PI = 3.14;
//const double Prox = 1e-7;
map<ll, ll>mp;
ll a[N], b[N];
set<ll>s;

// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution
int main()
{
    IO
    ll n, ans = 0; cin >> n;
    bool prime[(n * 2) + 1];
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for(ll p = 2; p * p <= (n * 2); p++){
        if(prime[p] == true){
            for(ll i = p * p; i <= (n * 2); i += p) prime[i] = false;
        }
    }
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for(ll i = 0; i < n; i++){
        if((mp[2] > 0) && (prime[ans + 2] == true)){
            cout << 2 << " ";
            ans += 2;
            mp[2]--;
        }
        else if(mp[1] > 0 && (prime[ans + 1] == true)){
            cout << 1 << " ";
            ans += 1;
            mp[1]--;
        }
        else if(mp[2] > 0){
            cout << 2 << " ";
            ans += 2;
            mp[2]--;
        }
        else{
            cout << 1 << " ";
            ans += 1;
            mp[1]--;
        }
    }
    return 0;
}
