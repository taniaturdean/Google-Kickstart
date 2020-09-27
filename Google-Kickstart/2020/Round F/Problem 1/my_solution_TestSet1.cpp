#include<iostream>
 #include <bits/stdc++.h> 
using namespace std;

void problem()
{
    long A,X,N,i,j,z,jc,y[100001];

    cin>>N>>X;
    long x[N+1];
    for(i=0;i<N;i++)
    {
      cin>>A;
      if(A%X==0)
      {
          x[i]=A/X-1;
      y[i]=A/X-1;
      }
      else
      {
      x[i]=A/X;
      y[i]=A/X;
    }
        
    }
 
    long n =sizeof(x)/sizeof(x[0]); 
    sort(x, x+n);
    
  
    
   for(i=0;i<N;i++)
    {
       
        j=1;
        z=0;
        while(j>0)
        {
            if(y[z]==x[i])
               { 
                   cout<<z+1<<" ";
                   y[z]=-1;
                   j--;
               }
             else
             z++;
            
      } 
}
}

int main()
{
    int T,i;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cout<<"Case #"<<i<<": ";
        problem();
        cout<<endl;
    }
    return 0;
}