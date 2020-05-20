#include <iostream>
using namespace std;

long N,K;

long cou ()
{
    long i,A,nr=0,c=0;
    int OK=0;
    
    for(i=1;i<=N;i++)
    {
        cin>>A;
        
        if(OK==1)
        nr--;
        
        if(nr!=A)
        OK=0;
        
        if(nr==1&&OK==1)
        {c++;
            nr--;
            OK=0;
        }
        
        
        if(A==K)
        {nr=A;
        OK=1;
        }
        
        
        
    }
    
    return c;
}

int main()
{
    int T,i;
    long nr;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>N>>K;
        nr=cou();
        cout<<"Case #"<<i<<": "<<nr<<endl;
    }
    
    return 0;
}