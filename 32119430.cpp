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
 lli t,n=0,i,x=0,n1,n2,n3;
cin>>n1>>n2>>n3;
map<lli,lli> m;
vector<lli> v;
for(i=0;i<n1;i++)
{
    cin>>t;
    m[t]++;
}
for(i=0;i<n2;i++)
{
    cin>>t;
    m[t]++;
}
for(i=0;i<n3;i++)
{
    cin>>t;
    m[t]++;
}
for(auto k= m.begin();k!=m.end();k++)
{
    if(k->second>1)
    {
    n++;
    v.push_back(k->first);
    }
}
cout<<n<<"\n";
sort(v.begin(),v.end());
for(i=0;i<v.size();i++)
cout<<v[i]<<"\n";
return 0;
}
