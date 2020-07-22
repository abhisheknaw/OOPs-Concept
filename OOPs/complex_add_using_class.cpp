#include<bits/stdc++.h>
using namespace std;
class Complex
{
    private:
    int a ,b;
    public:
    void input()
    {
        cin>>a>>b;
    }
    void display()
    {
        cout<<"a="<<a<<" "<<"b="<<b;
    }
    Complex add(Complex x)
    {
        Complex temp;
        temp.a=a+x.a;
        temp.b=b+x.b;
        return temp;
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
    Complex c,c1,c2;
    c.input();
    c1.input();
    c2=c.add(c1);
    c2.display();
    
    return 0;
}