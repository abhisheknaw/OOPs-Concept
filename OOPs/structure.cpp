#include<bits/stdc++.h>
using namespace std;
struct book 
{
    int bookid;
    char name[30];
    float price;
};
book input(book);
void display(book);
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
    book b1;
    b1=input(b1);
    display(b1);
    return 0;
}
book input(book b)
{
    cout<<"enter id name and price:\n";
    cin>>b.bookid>>b.name>>b.price;
    return (b);
}
void display(book b)
{
    cout<<"id name and price are:\n";
    cout<<b.bookid<<" "<<b.name<<" "<<b.price;
}