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
const long long N = 2e5 + 5;
const double PI = 3.14;
const double Prox = 1e-7;
map<ll, ll>mp;
ll a[N];
set<ll>s;

int main()
{
    IO
    string vowels = "aoyeui";
    string n; cin >> n;
    for(ll i = 0; i < n.size(); i++){
        ll flag = 0;
        char s = tolower(n[i]);
        for(ll j = 0; j < vowels.size(); j++){
            if(s == vowels[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0) cout << "." << s;
    }
    return 0;
}
