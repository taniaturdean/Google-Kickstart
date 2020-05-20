#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string s;
long int MOD=pow(10,9);

long int ClosingBracket(long int i)
{
    int OK=0;
    long int o=1,c=0;
    while(OK==0)
    {
        i++;
        if(s[i]=='(')
         o++;
         else
          if (s[i]==')')
           c++;
        if(o==c)
          OK=1;
    }
    return i;
}

void evaluate(long int L,long int R,long int &a,long int&b)
{ string str="NSWE";
int D;
long int a1,b1;
a=0,b=0;
while(L<=R)
{
size_t found= str.find(s[L]);
    if(found!= string::npos)
    {
        if (s[L]=='S')
        a++;
        if (s[L]=='N')
         if (a==0)
          a=MOD-1;
          else
            a--;
        if(s[L]=='E')
        b++;
        if(s[L]=='W')
         if (b==0)
          b=MOD-1;
          else
           b--;
    if(a>0)
    a=a % MOD;
    if(b>0)
    b=b % MOD;
    L++;
    }
    else
        if(isdigit(s[L]))
        {
            D=s[L]-'0';
            
            evaluate(L+2,ClosingBracket(L+1)-1,a1,b1);
            if(a!=0||a1!=0)
            a=(a+D*a1)%MOD;
            if(b!=0||b1!=0)
            b=(b+D*b1)%MOD;
            L=ClosingBracket(L+1)+1;
        }
}

}

int main()
{
    int T,j;
   long int a,b;
    cin>>T;
    for (j=1;j<=T;j++)
    {
        cin>>s;
        evaluate(0,s.length()-1,a,b);
        cout<<"Case #"<<j<<": "<<b+1<<" "<<a+1<<endl;
    }
    return 0;
}
