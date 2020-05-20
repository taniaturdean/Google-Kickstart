#include <iostream>
using namespace std;

int peak(int i)
{
    int N,j,p1,p2,p3,nr=0;
    cin>>N;
    cin>>p1>>p2;
    for (j=3;j<=N;j++)
    {
        cin>>p3;
        if(p2>p1 && p2>p3)
        nr++;
        p1=p2;
        p2=p3;
        
    }
    return nr;
}

int main()
{
    int T,i,p;
    cin>>T;
    for (i=1;i<=T;i++)
    {
        p=peak(i);
        cout<< "Case #"<<i<<": "<<p<<endl;
    }
    
    return 0;
}