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
//set<ll>s;

// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution


int main()
{
    IO
    vector<ll>v2;
    mp.clear();
    ll num = 1000000;
    for(ll i = 2; i <= num; i++){
        ll flag = 0;
        for(ll j = 2; j*j <= i; j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            mp[pow(i, 2)]++;
            //v2.push_back(pow(i, 2));
        }
    }
    //for(auto it = v2.begin(); it < v2.end(); it++) cout << *it << " ";

    ll n; cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        if(mp[a[i]] >= 1) cout << "YES" << endll;
        else cout << "NO" << endll;
    }
    return 0;
}
