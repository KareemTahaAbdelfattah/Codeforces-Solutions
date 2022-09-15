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
//map<ll, ll>mp;
//ll a[N];
//set<ll>s;

/*ll GCD(ll a, ll b){
    return (__gcd(a, b));
}

ll LCM(ll a, ll b){
    return ((a * b) / (GCD(a, b)));
}*/
// right shift (n) = num / pow(2, n);
// left shift (n) = num * pow(2, n);
// sleep(micro second); for slow execution
/*bool isPrime(ll n){
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
}*/

int a, b, c, i, j, k, p, n;
ll ans;

int main()
{
    IO
    scanf("%d %d %d", &a, &b, &c);
    for(i = 1; i <= a; i++){
        for(j = 1; j <= b; j++){
            for(k = 1; k <= c; k++){
                int num = (i * j * k);
                n = 0;
                for(p = 1; p * p <= num; p++){
                    if(num % p == 0){
                        n++;
                        if(p * p != num) n++;
                    }
                }
               ans += n;
            }
        }
    }
    printf("%d", ans);
    return 0;
}
