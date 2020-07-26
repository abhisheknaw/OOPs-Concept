#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
	int a,b;
public:
	void set_value(int x,int y)
	{
		a=x;
		b=y;
	}
	friend void sum(Complex)
};
void sum(Complex c)
{
	cout<<"sum is: "<<c.a+c.b;
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
	Complex c1;
	c1.set_value(3,4);
	sum(c1);
	return 0;
}	
