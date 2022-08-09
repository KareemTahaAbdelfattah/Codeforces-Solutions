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

int m;

bool cmp(string a, string b){
    for(int i = 0; i < m; i++){
        if(a[i] != b[i]) return i % 2? a[i] > b[i]: b[i] > a[i];
    }
}


int main()
{
    IO
    int n; cin >> n >> m;
    map<string, int>mp;
    string a1[n];
    for(int i = 0; i < n; i++){
        cin >> a1[i];
        mp[a1[i]] = i + 1;
    }
    sort(a1, a1 + n, cmp);
    for(int i = 0; i < n; i++) cout << mp[a1[i]] << " ";
    return 0;
}
