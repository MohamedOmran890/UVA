#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef long long int lli;
#define forn(n) for(int i=0; i<n; i++)
#define fornn(n) for(int j=0; j<n; j++)
#define cin(vec) for(auto& i : vec) cin >> i
#define cout(vec) for(auto& i : vec) cout << i << " "; cout << "\n";
#define cout_map(mp) for(auto& [f, s] : mp) cout << f << "  " << s << "\n";
#define fixed(n)  cout<<fixed << setprecision(n);
#define all(vec) vec.begin(),vec.end()
#define rall(vec) vec.rbegin(),vec.rend()
#define sz size()
#define PI 3.14159265359
#define pb push_back
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
vector<ll>v;
vector<int>v2;
vector<int>a;
vector<int>b;

void FAST()
{
ios_base::sync_with_stdio(0);
cout.tie(0);
cin.tie(0);

}
void file()
{
freopen("coprime.in", "r", stdin);
}
string s,d;
int n,ans=0,k;
vector<string>vs;
/*void solve(int i,int sum1,int sum2,string d)
{
  if(i>=2*n)
  {
      if(sum1==sum2)
        {ans++;
        vs.pb(d);}
      return ;
  }
  if(i<=n/2)
   {
       solve(i+1,sum1,sum2,d+'0');
       solve(i+1,sum1+1,sum2,d+'1');
   }
   else
   {
       solve(i+1,sum1,sum2,d+'0');
       solve(i+1,sum1,sum2+1,d+'1');
   }
}*/
int solve(int i,int x)
{
    if(i==s.sz)
    {
        if(x==k)
            return 1;
        return 0;
    }
    return solve(i+1,x+(s[i]-'0'))+solve(i+1,x*(s[i]-'0'));
}

int main() {
FAST();

    int n,m;
    while(cin>>n>>m&&n&&m){
            vector<int>lft(n+5);
            vector<int>righ(n+5);
    for(int i=1;i<=n;i++)
    {
        righ[i]=i+1;
        lft[i]=i-1;
    }
    righ[n]=0;
    forn(m)
    {
        int l,r;
        cin>>l>>r;
        lft[righ[r]]=lft[l];
        righ[lft[l]]=righ[r];
    if(lft[l])
        cout<<lft[l]<<' ';
        else
            cout<<"* ";

            if(righ[r])
                cout<<righ[r]<<'\n';
                else
                cout<<"*\n";
                }
    cout<<"-\n";

    }

}

