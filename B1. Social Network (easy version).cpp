#include <bits/stdc++.h>
#include <vector>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define int         long long
#define ll          long long
#define ld	    long double
#define pb          push_back
#define pp	    pop_back
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define vii         vector<pii>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define mp          make_pair
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll)x.size()
#define endl        '\n'
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repj(j,a,b) for(ll j=a;j<b;j++)
#define IOS	    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef tree<ll,null_type,less<ll>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;

//CONSTANTS----------------------------------
#define PI 	    3.141592653589793238462643
const ll hell=1000000007;
const ll mod=1000000007;
//function-----------------------------------
ll GCD(ll a , ll b)
{
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}
ll LCM(ll a, ll b)
{
    return a*(b/GCD(a,b));
}
bool isPrime(ll n) {

    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
ll fact(ll n)
{
    ll f=1;
    for(ll i=2;i<=n;i++)
	f=f*i;
    return f;
}
//CODE------------------------------------------
ll solve()
{
    ll n,k;
    cin>>n>>k;
    vi v; ll x;
    rep(i,0,n)
    {
        cin>>x;
        if(find(all(v),x)==v.end())
        {
            if(sz(v)>=k) v.pop_back();
            v.insert(v.begin(),x);
        }
        else continue;
    }
    cout<<sz(v)<<endl;
    for(auto it:v) cout<<it<<" ";
    return 0;
}
//MAIN------------------------------------------
signed main(){
    IOS
    #ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #endif
    int t=1;
    //cin>>t;
    while(t--) {
        solve();
        cout<<endl;
    }
    return 0;
}


