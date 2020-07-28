#include <bits/stdc++.h>
using namespace std;
class A
{
	int a;
public:
	void setA(int k)
	{
		a=k;
	}
	virtual void show()
	{
		cout<<"a="<<a;
	}

};
class B: public A
{
	int b;
public:
	void setB(int y)
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
	A *p,a;
	a.setA(3);

	B b;
	b.setB(4);
	p=&b;
	a.show();
	p->show();
	return 0;
	
}