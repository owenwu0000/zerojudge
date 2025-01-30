#include <iostream>
#include <cmath>
using namespace std;

int main()
{  
    int N,M,w,x,y,z,k,t,i,j;
    int p,q,r,a,b,c;
    cin >> p >> a;
    cin >> q >> b;
    cin >> r >> c;
    for (i=1;i<=p*q;i++)
    {
        if (i%p==0&&i%q==0)
        {
            k=i;
            break;
        }
    }
    
    for (i=1;i<=k;i++)
    {
        x=p*i+a;
        for (j=1;j<=k;j++)
        {
            y=q*j+b;
            if (x==y)
            {
                M=x;
                break;
            }
        }
    }
    
    for (i=1;i<=M*r;i++)
    {
        if (i%M==0&&i%r==0)
        {
            t=i;
            break;
        }
    }
    
    for (i=1;i<=t;i++)
    {
        w=M*i+k;
        for (j=1;j<=t;j++)
        {
            z=r*j+c;
            if (w==z)
            {
                N=w;
                break;
            }
        }
    }
    cout << k << endl;
    cout << M << endl;
    cout << t << endl;
    cout << N << endl;
    return 0;
}