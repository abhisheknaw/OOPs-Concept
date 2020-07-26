#include <bits/stdc++.h>
using namespace std;
class B;
class A
{
private:
	int a;
public:
	void set_value(int x)
	{
		a=x;
		
	}
	friend void sum(A,B);
};
class B
{
private:
	int b;
public:
	void set_value(int y)
	{
		b=y;
		
	}
	friend void sum(A,B);
};

void sum(A m,B n)
{
	cout<<"sum is: "<<m.a+n.b;
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
	A a1;
	a1.set_value(3);
	B b1;
	b1.set_value(4);
	sum(a1,b1);
	return 0;
}	
