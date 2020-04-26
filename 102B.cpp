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
 lli t,n,i,s=0,s1=0,r,x=0,a;
string str;
cin>>str;
if(str.length()==1)
{
    cout<<0;
    return 0;
}
for(i=0;str[i]!='\0';i++)
{
    n=str[i]-48;
    s+=n;
    //cout<<n<<" ";
}
while(s>=10)
{
    a=s;s1=0;
    while(a!=0)
    {
        r=a%10;
        s1+=r;
        a/=10;
    }
    x++;
    s=s1;
}
cout<<x+1<<"\n";
return 0;
}

