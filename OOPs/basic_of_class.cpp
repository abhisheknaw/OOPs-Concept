#include<bits/stdc++.h>
using namespace std;
class Complex
{
    public:
    int a ,b;
    void input()
    {
        cin>>a>>b;
    }
    void display()
    {
        cout<<"a="<<a<<" "<<"b="<<b;
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
    Complex c,c2;
    c.input();
    c.display();
    c2.input();
    c2.display();
    return 0;
}