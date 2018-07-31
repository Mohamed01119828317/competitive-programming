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

    int n,a[1001],x=0,y=0;
    cin>>n;
    mm(i,n)
        cin>>a[i];
    int l=0,r=n-1,t=0;
    while(l<=r)
    {
       if(!(t&1))
       {
           if(a[l]>=a[r])
                x+=a[l],l++;
           else
                x+=a[r],r--;
            t++;
       }
       else
       {
           if(a[l]>=a[r])
                y+=a[l],l++;
           else
                y+=a[r],r--;
            t++;
       }
    }
    cout<<x<<" "<<y<<endl;

}
