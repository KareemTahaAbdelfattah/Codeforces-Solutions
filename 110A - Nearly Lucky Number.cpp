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
map<char, ll>mp;
char a[N];
set<char>s;

int main()
{
    IO
    ll flag = 0, cnt = 0;
    string n; cin >> n;
    for(ll i = 0; i < n.size(); i++) if(n[i] == '4' || n[i] == '7') cnt++;
    string s = to_string(cnt);
    for(ll i = 0; i < s.size(); i++){
        if(s[i] != '4' && s[i] != '7'){
            flag = 1;
            break;
        }
    }
    if(flag == 1) cout << "NO";
    else cout << "YES";
    return 0;
}
