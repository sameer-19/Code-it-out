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
 lli t,n,i,k;
cin>>n>>k;
if(n%2==0)
{
	t=n/2;
	if(k<=t)
	{
		cout<<(2*k)-1<<"\n";
	}
	else
	{
		t=k-t;
		cout<<2*t<<"\n";
	}
}
else
{
t=(n+1)/2;
if(k<=t)
{
cout<<(2*k)-1<<"\n";	
}
else
{
	t=k-t;
	cout<<2*t<<"\n";
}	
}
return 0;
}
