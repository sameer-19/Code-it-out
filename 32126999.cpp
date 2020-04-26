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
 lli t,n,i,f=0,h,x=1;
cin>>n>>h;
lli a[n+1];
for(i=1;i<=n;i++) cin>>a[i];
while(1)
{
    cin>>t;
    if(t==0) break;
    if(t==1)
    {
        if(x==1) continue;
        else x--;
    }
    else if(t==2)
    {
        if(x==n) continue;
        else x++;
    }
    else if(t==3)
    {
        if(f==0 && a[x]>0)
        {
            f=1; a[x]--;
        }
        else continue;
    }
    else if(t==4)
    {
        if(f==1 && a[x]<h)
        {
            a[x]++; f=0;
        }
        else continue;
    }
}
for(i=1;i<=n;i++)
cout<<a[i]<<" ";
return 0;
}
