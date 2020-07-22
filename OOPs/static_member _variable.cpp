#include<bits/stdc++.h>
using namespace std;
/*class Demo
{
public:
	static int x;
	void display()
	{
		cout<<x;
	}
};
int  Demo::x;
int main()
{
	ios_base::sync_with_stdio(false);                  //when static variable is publicly defined;
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	Demo::x=4;
	Demo d;
	d.display();
	return 0;
}*/


/*class Demo
{
private:
	static int x;
public:
	static void display()
	{
		cout<<x;
	}
	static void setdata(int a)
	{
		x=a;
	}                                  //method 1
};                                     //setting static member variable is privately define then we can access it using static function
int  Demo::x;            
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
    Demo::setdata(4);
	Demo :: display();
	return 0;
}*/


/*class Demo
{
private:
	static int x;
public:
	void set(int a)
	{
		x=a;
	}
	static void display()
	{
		cout<<x;
	}
};
int  Demo::x;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);                      //when static member is privately defind but is accessd using member function variable and class function

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);      
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	Demo d;
	d.set(2);
	Demo::display();
	return 0;
}*/