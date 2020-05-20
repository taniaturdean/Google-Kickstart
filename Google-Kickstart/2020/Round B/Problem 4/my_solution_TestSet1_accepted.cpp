#include <iostream>
using namespace std;

long int U,D,H,L,R,W;
long double m[301][301];

long double prob(int x,int y)
{
    long int c,r;
    
 
    
     for(r=1;r<=H;r++)
    for(c=1;c<=W;c++)
     m[r][c]=-1;

   m[H][W]=1;
   
    for(r=U;r<=D;r++)
    for(c=L;c<=R;c++)
    m[r][c]=0;

for(c=W-1;c>=1;c--)
if(m[H][c]==-1)
         m[H][c]=m[H][c+1];

for(r=H-1;r>=1;r--)
if(m[r][W]==-1)
         m[r][W]=m[r+1][W];


     for(r=H-1;r>=1;r--)
     for(c=W-1;c>=1;c--)
     {
         if(m[r][c]!=0)
              m[r][c]=m[r][c+1]/2+m[r+1][c]/2;
             
     }

     return m[1][1]; 

}



int main()
{
    int T,i;
   long double p;
    
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>W>>H>>L>>U>>R>>D;
        p=prob(1,1);
        cout<<"Case #"<<i<<": "<<p<<endl;
    }
    return 0;
} 
