#include <bits/stdc++.h>
using namespace std;
class Integer
{
private:
	int a;
public:
	void set_data()
	{
		cin>>a;
	}
	void display()
	{
		cout<<"\na="<<a;
	}
	Integer operator ++()                     //operator overloading
	{
		Integer temp;                         //pre increment 
		temp.a=++a;
		return (temp);
	}
	Integer operator ++(int)                 //post increment
	{
		Integer t;
		t.a=a++;
		return(t);
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
	Integer c1,c2,c3;
	c1.set_data();
	//c2=++c1;
	//c2.display();
	c3=c1++;
	c3.display();
	return 0;
}	