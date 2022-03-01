#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
//to read input from input.txt
freopen("output.txt", "w", stdout);
//to print output in output.txt
#endif

int t=1;
cin>>t;
while(t--)
{
	solve();
	cout<<"\n";
}
return 0;
}
void solve()
{
	for(int i=1;i<6;i++)
		cout<<i<<endl;
}
