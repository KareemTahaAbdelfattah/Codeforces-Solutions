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
    string s; cin >> s;
    ll siz = s.size(), n;
    if(s == "4" || s == "0" || s == "8") cout << 4 << endll;
    else {  char s1 = s[siz - 2], s2 = s[siz - 1];
        if((s1 == '0' && s2 == '4') || (s1 == '0' && s2 == '8') || (s1 == '1' && s2 == '2') || (s1 == '1' && s2 == '6') || (s1 == '2' && s2 == '0') || (s1 == '2' && s2 == '4') || (s1 == '2' && s2 == '8') || (s1 == '3' && s2 == '2') || (s1 == '3' && s2 == '6') || (s1 == '4' && s2 == '0') || (s1 == '4' && s2 == '4') || (s1 == '4' && s2 == '8') || (s1 == '5' && s2 == '2') || (s1 == '5' && s2 == '6') || (s1 == '6' && s2 == '0') || (s1 == '6' && s2 == '4') || (s1 == '6' && s2 == '8') || (s1 == '7' && s2 == '2') || (s1 == '7' && s2 == '6') || (s1 == '8' && s2 == '0') || (s1 == '8' && s2 == '4') || (s1 == '8' && s2 == '8') || (s1 == '9' && s2 == '2') || (s1 == '9' && s2 == '6') || (s1 == '0' && s2 == '0')){
            cout << 4 << endll;
        }else cout << 0 << endll;
    }
    return 0;
}
