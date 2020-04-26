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
 lli t,n,i,p,q,f=0,x;
cin>>t;
while(t--)
{
cin>>n;f=0;
vector<lli> v,v1;
for(i=0;i<n;i++)
{
    cin>>x;
    v1.push_back(x);
}
sort(v1.begin(),v1.begin()+n);
p=v1[0]*v1[n-1];
for(i=2;i*i<=p;i++)
{
    if(p%i==0)
    {
    v.push_back(i);
    q=p/i;
    if(q!=i) v.push_back(q);
    }
}
sort(v.begin(),v.end());
if(v!=v1)
{
cout<<-1<<"\n";
}
else
{
cout<<p<<"\n";
//for(i=0;i<v.size();i++)
//cout<<v[i]<<" ";
//cout<<"\n";
//cout<<p<<"\n";
}
}
//}
return 0;
}

