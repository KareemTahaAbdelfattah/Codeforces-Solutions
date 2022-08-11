/** ========================================**
 ** @Author: Kareem Taha Abdelfatah
 ** @Category: Codeforces problems solutions
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
map<char, ll>mp;
ll a[N];

int main()
{
    IO
    deque<char>dq;
    ll n, A = 0, G = 0, T = 0, C = 0, UN = 0, flag = 0; cin >> n;
    string s; cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A') A++;
        if(s[i] == 'G') G++;
        if(s[i] == 'C') C++;
        if(s[i] == 'T') T++;
        if(s[i] == '?') UN++;
    }
    int mx = max({A, G, C, T});
    int sum = (mx - A) + (mx - C) + (mx - G) + (mx - T);
    if(sum == UN){
        A = mx - A;
        C = mx - C;
        G = mx - G;
        T = mx - T;
    }
    else if(UN > sum){
        int rest = UN - sum;
        if(rest % 4 == 0){
            A = (mx - A) + (rest / 4);
            C = (mx - C) + (rest / 4);
            G = (mx - G) + (rest / 4);
            T = (mx - T) + (rest / 4);
        }
        else flag = 1;
    }
    if(flag == 1 || UN < sum) cout << "===";
    else{
        for(int i = 1; i <= A; i++) dq.push_back('A');
        for(int i = 1; i <= C; i++) dq.push_back('C');
        for(int i = 1; i <= G; i++) dq.push_back('G');
        for(int i = 1; i <= T; i++) dq.push_back('T');
        for(int i = 0; i < n; i++){
            if(s[i] == '?'){
                s[i] = dq.front();
                dq.pop_front();
            }
        }
        for(int i = 0; i < n; i++) cout << s[i];
    }
    return 0;
}
