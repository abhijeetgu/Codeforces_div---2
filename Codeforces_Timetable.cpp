#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int flag=1;
    int n=s.size();
    for(int i=1;i<n;i++)
        if(s[i]=='1')
            flag=0;
    if(n%2==0)
    {
        cout<<(n+1)/2<<endl;
    }
    else
    {
        cout<<(n+1)/2-flag<<endl;
    }
    return 0;
}
