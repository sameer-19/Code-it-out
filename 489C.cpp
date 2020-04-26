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
 lli t,n,i,x,s,z=0,d,y;
cin>>n>>s;
if(s==0 && n>1)
{
    cout<<-1<<" "<<-1;
    return 0;
}
else if(s==0 && n==1)
{
    cout<<0<<" "<<0;
    return 0;
}
x=s;
y=s;
if(s>(9*n))
{
    cout<<-1<<" "<<-1;
    return 0;
}
vector<lli> v,v1;z=0;d=0;
for(i=0;i<n;i++)
{
    if(x>=9)
    {
        v.push_back(9);
        x-=9;
    }
    else
    {
        v.push_back(x);
        x-=x;
    }
}
v1.push_back(1);y--;
for(i=1;i<n;i++)
{
    if(y>=9)
    {
        v1.push_back(9);
        y-=9;
    }
    else
    {
        v1.push_back(y);
        y-=y;
    }
}
if(y>0)
{
    y+=1;
    v1[0]=y;
    reverse(v1.begin()+1,v1.end());
    for(i=0;i<v1.size();i++)
    cout<<v1[i];
}
else
{
 reverse(v1.begin()+1,v1.end());
    for(i=0;i<v1.size();i++)
    cout<<v1[i];   
}
cout<<" ";
for(i=0;i<v.size();i++)
cout<<v[i];
return 0;
}
