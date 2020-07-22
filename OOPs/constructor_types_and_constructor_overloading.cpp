#include <bits/stdc++.h>
using namespace std;
class New
{
private:
	int a,b;
public:
	New(int x,int y)             //parameterized constructor
	{                             
		a=x;
		b=y;
	
	}
	New(int k)                                                         //constructor overloading
	{
		a=k;
	}
	New()                       //default constructor
	{

	}
	New(New &n)                //copy constructor
	{
		a=n.a;
		b=n.b;
		cout<<a;
		cout<<b;

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
	New a1(1,2);
	New a2(1);
	New a3;
	New a4(a1);
	return 0;
}