#include <bits/stdc++.h>
using namespace std;
class Demo
{
public:
	Demo()
	{
		cout<<"constructor is calld as fast as objects are made:\n";
	}
};

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
	Demo d1,d2,d3;
}