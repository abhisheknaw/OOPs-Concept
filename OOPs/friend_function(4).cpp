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
	void show()
	{
		cout<<"\na="<<a<<" "<<"b="<<b;
	}
	friend Complex operator -(Complex);
};
Complex operator -(Complex X)
{
	Complex temp;
	temp.a=-X.a;
	temp.b=-X.b;
	return (temp);
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
	Complex c1,c2;
	c1.set(3,4);
	c2=-c1;
	c2.show();
	return 0;
}