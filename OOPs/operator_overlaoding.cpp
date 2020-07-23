#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
	int a,b;
public:
	void set_data()
	{
		cin>>a;
		cin>>b;
	}
	void display()
	{
		cout<<"\na="<<a<<" "<<"b="<<b;
	}
	Complex operator +(Complex c)                     //operator overloading
	{
		Complex temp;
		temp.a=a+c.a;
		temp.b=b+c.b;
		return (temp);
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
	Complex c1,c2,c3;
	c1.set_data();
	c2.set_data();
	c3=c1+c2;                                              //method 1 without .operator;
	c3=c1.operator +(c2);                                    //method 2 with .operator;
	c3.display();
	c3.display();
	return 0;
}	