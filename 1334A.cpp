#include<bits/stdc++.h>
using namespace std;
#define pb emplace_back
#define pob pop_back
typedef long long int lli;
#define fio() ios_base::sync_with_stdio(false);\
cin.tie(NULL);

int main()
{
fio();
 lli t,n,i,f,d;
cin>>t;
while(t--)
{
cin>>n;f=0;
lli p[n],c[n];
for(i=0;i<n;i++)
{
    cin>>p[i]>>c[i];
    if(p[i]<c[i])
    {
        f=1;
    }
}
if(f!=1)
{
for(i=1;i<n;i++)
{
    if(p[i]<c[i]) 
    {
        f=1;break;
    }
    if(p[i]>p[i-1] && c[i]>=c[i-1] )
    {
        d=p[i]-p[i-1];
        if((c[i]-c[i-1])<=d) continue;
        else
        {
            f=1;break;
        }
    }
    else if(p[i]<p[i-1] || c[i]<c[i-1]) 
    {
        f=1;break;
    }
    else if(p[i]==p[i-1] && c[i]>c[i-1])
    {
        f=1;break;
    }
}
}
if(f==1) cout<<"NO\n";
else cout<<"YES\n";
}
return 0;
}
