#include <bits/stdc++.h>
using namespace std;
class A
{
	int a;
public:
	void set(int a)
	{
		this->a=a;
	}
	void showd()
	{
		cout<<"a="<<a;
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
	A a1;
	a1.set(2);
	a1.showd();
	return 0;
}