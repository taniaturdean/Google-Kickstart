#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int N;

bool isPerfectSquare(int x) 
{   
  
  float sr = sqrt(x); 
  
  return ((sr - floor(sr)) == 0); 
} 
  

int sub()
{
    int nr=0;
    cin>>N;
    int v[N],i,j,S;
    
    for(i=1;i<=N;i++)
        cin>>v[i];
    
    for(i=1;i<=N;i++)
    {
        S=0;
        
        for(j=0;j<=N-i;j++)
        {
         S=S+v[i+j];
         if(isPerfectSquare(S))
         nr++;
         
        }
        
    }
    
    return nr;
    
    
}



int main()
{
    int T,i;
    int nr;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        nr=sub();
        
        cout<<"Case #"<<i<<": "<<nr<<endl;
        
    }
    
    return 0;
    
}