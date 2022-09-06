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
map<ll, ll>mp1, mp2, mp3;
ll a[N], b[N];
set<ll>s;

// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution


int main()
{
    IO
    vector<ll>v;
    ll n, k, flag = 0; cin >> n >> k;
    if(k == 1) cout << n;
    else{
        for(ll i = 2; i*i <= n; i++){
            if(flag == 1) break;
            while(n % i == 0){
                n /= i;
                v.push_back(i);
                if(v.size() == (k - 1) && n != 1){
                    v.push_back(n);
                    flag = 1;
                    break;
                }
            }
        }
        if(n > 1 && (v.size() != k)) v.push_back(n);
        if(v.size() < k) cout << -1 << endll;
        else{
            vector<ll>::iterator it;
            for(auto it = v.begin(); it != v.end(); it++) cout << *it << " ";
        }
    }
    return 0;
}
