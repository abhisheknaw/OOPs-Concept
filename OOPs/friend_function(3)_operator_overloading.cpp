#include <bits/stdc++.h>
using namespace std;
class Complex
{
	int a,b;
public:
	void set(int x,int y)
	{
		a=x;
		b=y;
	}
	friend Complex operator +(Complex,Complex);
	void disp()
	{
		cout<<"\na="<<a<<" "<<"b="<<b;
	}
};
Complex operator +(Complex X,Complex Y)
{
	Complex temp;
	temp.a=X.a+Y.a;
	temp.b=X.b+Y.b;
	return (temp);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	Complex c1,c2,c3;
	c1.set(3,4);
	c2.set(5,6);
	c3=c1+c2;
	c3=operator +(c1,c2);
	c3.disp();
	return 0;
}