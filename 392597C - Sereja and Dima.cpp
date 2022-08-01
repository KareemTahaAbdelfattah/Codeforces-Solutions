/** ========================================**
 ** @Author: Kareem Taha Abdelfatah
 ** @Category: Codeforces problems solutions
/** ========================================**/

#include<bits/stdc++.h>
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

ll a[N], b[N] ,q[N], s[N], w[N], xy[N], l, r, v, x, y, j;
string a1[N], b1[N];
char arr[N];
map<ll, ll>mp, mk;
set<ll>st;

int main()
{
    IO
    deque<ll> dq;
    bool Reversed = false;
    ll n, sereja = 0, Dima = 0; cin >> n;
    for(ll i = 0; i < n; i++){
        ll t; cin >> t;
        dq.push_back(t);
    }
    while(!dq.empty()){
        if(dq.front() >= dq.back()){
            if(!Reversed){
                sereja += dq.front();
                dq.pop_front();
                Reversed = !Reversed;
            }
            else{
                Dima += dq.front();
                dq.pop_front();
                Reversed = !Reversed;
            }
        }
        else{
            if(!Reversed){
                sereja += dq.back();
                dq.pop_back();
                Reversed = !Reversed;
            }
            else{
                Dima += dq.back();
                dq.pop_back();
                Reversed = !Reversed;
            }
        }
    }
    cout << sereja << " " << Dima;
    return 0;
}
