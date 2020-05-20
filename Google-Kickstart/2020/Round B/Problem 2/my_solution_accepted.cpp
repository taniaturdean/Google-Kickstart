#include <iostream>
using namespace std;

long long int latest (int i)
{
    int N,j;
    long long int D,x[1001];
    cin>>N>>D;
    for(j=1;j<=N;j++)
    cin>>x[j];
    for(j=N;j>=1;j--)
        D=D-(D % x[j]);
    return D;
}

int main()
{
    int T,i;
    long l;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        l=latest(i);
        cout<<"Case #"<<i<<": "<<l<<endl;
    }
    return 0;
}