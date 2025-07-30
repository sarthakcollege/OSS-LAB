#include <iostream>
using namespace std;
class number
{
public:
    int r(int n)
    {
        int re;
        int rev=0;
        while(n!=0)
        {
            int re=n%10;
            rev=rev*10+re;
            n/=10;
        }
        return rev;
    }};
    int main()
    {
        number ob;
        int n;
        cout<<"enter a number=";
        cin>>n;

int v=ob.r(n);
cout<<v;
        return 0;
    }
