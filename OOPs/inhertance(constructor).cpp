#include <bits/stdc++.h>
using namespace std;
class A
{
	int a;
public:
	A(int k)
	{
		a=k;
	}
	virtual void showd()
	{
		cout<<"a="<<a;
	}

};
class B: public A
{
	int b;
public:
	B(int x,int y):A(x)
	{
		b=y;
	}
	void show()
	{
		cout<<"b="<<b;
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

	B b(2,3);
	b.showd();
	b.show();
	
}