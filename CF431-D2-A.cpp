#include <bits/stdc++.h>

#define  Mo_Ha_Med   std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)     for(int i=0;i<n;i++)
#define  rr(i,n)     for(int i=1;i<=n;i++)
#define  nn(i,n)     for(int i=n-1;i>=0;i--)
#define  xx(i,r,n)   for(int i=r;i<n;i++)
#define  all(v)      ((v).begin()),((v).end())
#define  sz(v)       ((int)(v).size())
#define  MP          make_pair
#define  mod         1e9+7
#define  OO          0x3f3f3f3f
#define  EPS         1e-10

typedef  long long ll;
typedef  unsigned long long ull;
typedef  long double ld;
using namespace std;

int main()
{
    Mo_Ha_Med

    int n,a1,a2,a3,a4;
    string s;
    cin>>a1>>a2>>a3>>a4>>s;
    n=a1*count(all(s),'1')+a2*count(all(s),'2')+a3*count(all(s),'3')+a4*count(all(s),'4');
    cout<<n<<endl;
}
