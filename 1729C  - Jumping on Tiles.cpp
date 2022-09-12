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
//const double PI = 3.14;
//const double Prox = 1e-7;
map<char, ll>mp;
ll a[N];
set<ll>s;

ll GCD(ll a, ll b){
    return (__gcd(a, b));
}

ll LCM(ll a, ll b){
    return ((a * b) / (GCD(a, b)));
}
// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution
bool isPrime(ll n){
    for(ll i = 2; i*i <= n; i++) if(n % i == 0) return 0;
    return 1;
}

bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}


bool sortbyCond1(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second > b.second);
}

int main()
{
    IO
    mp.clear();
    char i = 'a';
    for(ll j = 1; j <= 26; j++){
        mp[i] = j;
        i++;
    }
    ll Tc; cin >> Tc;
    while(Tc--){
       std::vector<std::pair<ll, ll>>v;
       string s; cin >> s;
       ll j = 2, flag = 0;
       a[1] = mp[s[0]];
       for(ll i = 1; i < s.size(); i++){
            a[j] = mp[s[i]];
            j++;
       }
       if(a[j - 1] >= a[1]){
            for(ll k = 1; k < j; k++){
                if(a[k] <= a[j - 1] && a[k] >= a[1]){
                    v.push_back(std::make_pair(a[k], k));
                    //cout << a[k] << " " << k << " ";
                }
            }
            sort(v.begin(), v.end(), sortbyCond1);
            flag = 1;
       }
       else if(a[j - 1] <= a[1]){
            for(ll k = 1; k < j; k++){
                if(a[k] >= a[j - 1] && a[k] <= a[1]){
                    v.push_back(std::make_pair(a[k], k));
                    //cout << a[k] << " " << k << " ";
                }
            }
            sort(v.rbegin(), v.rend(), sortbyCond);
       }
       ll sum = 0, siz = v.size();
       for(ll it = 0; it != (siz - 1); it++) sum += abs(v[it + 1].first - v[it].first);
       cout << sum << " " << siz << endll;
       if(!flag) for(ll it = 0; it != siz; it++) std::cout << v[it].second << " ";
       else for(ll it = (siz - 1); it >= 0; it--) std::cout << v[it].second << " ";
       cout << endll;
    }
    return 0;
}
