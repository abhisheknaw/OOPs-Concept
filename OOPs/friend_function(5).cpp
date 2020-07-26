#include <bits/stdc++.h>
using namespace std;
class Complex
{
	int a,b;
public:
	friend ostream& operator <<(ostream&,Complex&);
	friend istream& operator >>(istream&,Complex&);
};
ostream& operator <<(ostream &dout,Complex &c)
{
	dout<<"\na="<<c.a<<" "<<"b="<<c.b;
	return (dout);
}
istream& operator >>(istream &din,Complex &c)
{
	din>>c.a>>c.b;
	return (din);
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
	Complex c1;
	cin>>c1;
	cout<<c1;
	return 0;
}
