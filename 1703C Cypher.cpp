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
const long long N = 2e5 + 5, MOD = 1e9 + 7, OO = 1e18;
const double PI = acos(-1);
 
ll a[N], b[N] ,q[N], s[N], w[N], xy[N], l, r, v, x, y, j;
string a1[N], b1[N];
map<char, long long>mp, mk;
set<long long>st;
 
int main()
{
    IO
    int Tc; cin >> Tc;
    while(Tc--){
        int n; cin >> n;
        fr1(i, n) cin >> a[i];
        for(int j = 1; j <= n; j++){
            int b; cin >> b;
            string ud; cin >> ud;
            for(int i = 0; i < b; i++){
                if(ud[i] == 'U'){
                    if(a[j] == 0){
                        a[j] = 9;
                    }
                    else a[j]--;
                }
                else{
                    if(a[j] == 9){
                        a[j] = 0;
                    }
                    else a[j]++;
                }
            }
        }
        fr1(i, n) cout << a[i] << " ";
        cout << endll;
    }
    return 0;
}
