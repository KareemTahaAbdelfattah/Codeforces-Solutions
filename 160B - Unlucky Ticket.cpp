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
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;
map<ll, ll>mp;
ll a[N], b[N];

int main()
{
    IO
    int n, ans = 0; cin >> n;
    string s; cin >> s;
    int l = 0, r = n;
    int flag;
    for(int i = 0; i < n; i++) a[i] = s[i];
    int j = 0;
    for(int i = n; i < n * 2; i++){
        b[j] = s[i];
        j++;
    }
    sort(a, a + n);
    sort(b, b + n);
    for(int i = 0; i < n; i++) s[i] = a[i];
    j = 0;
    for(int i = n; i < n * 2; i++){
        s[i] = b[j];
        j++;
    }
    //cout << s << endll;
    if(s[l] > s[r]) flag = 0;
    else if(s[r] > s[l]) flag = 1;
    for(int i = 0; i < n; i++){
        if(flag == 0){
            if(s[l] > s[r]){
                ans++;
                l++;
                r++;
            }
        }
        else if(flag == 1){
            if(s[r] > s[l]){
                ans++;
                l++;
                r++;
            }
        }
    }
    if(ans == n) cout << "YES";
    else cout << "NO";
    return 0;
}
