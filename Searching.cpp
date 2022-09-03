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
const long long N = 2e5 + 5;
ll a[N], b[N];


int main()
{
    IO
    ll n; cin >> n;
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll x, flag = -1; cin >> x;

    for(ll i = 0; i < n; i++){
        if(a[i] == x){
            flag = i;
            break;
        }
    }

    if(flag == -1) cout << -1;
    else cout << flag;

    return 0;
}
