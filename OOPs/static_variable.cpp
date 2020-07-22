#include<bits/stdc++.h>
using namespace std;
int demo()
{
	static int x=0;
	x++;
	return x;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	cout<<demo()<<"\n";
	cout<<demo();
	return 0;
}