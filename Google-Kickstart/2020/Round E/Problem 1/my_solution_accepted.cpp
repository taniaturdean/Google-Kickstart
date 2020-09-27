#include<iostream>
using namespace std;

long N,A1,A2,i,d1,d2;

long problem()
{
    long nr=2,max=2;
    cin>>A1;
    cin>>A2;
    d1=A1-A2;
    A1=A2;
    for(i=3;i<=N;i++)
    {
        cin>>A2;
        d2=A1-A2;
        if(d2==d1)
        nr++;
        else
        {if(nr>max)
        max=nr;
        nr=2;}
        d1=d2;
        A1=A2;
    }
    if(nr>max)
    max=nr;
    return max;
}

int main()
{
    int T,i;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>N;
        cout<<"Case #"<<i<<": "<<problem()<<endl;
    }
    return 0;
}