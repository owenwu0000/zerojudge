#include <iostream>
#include <cmath>
using namespace std;

int main()
{  
    int x1,y1,x2,y2;
    int a,b,c,d,p,q,i=0,k=0;
    cin >> x1 >> y1 >> x2 >> y2;
    p=y1-y2;
    q=x1-x2;
    if (p>0)
    {
        if (p>=q)
        {
            for(i=p;i<=p*q;i++)
            {
                if (i%p==0&&i%q==0)
                {
                    k=i;
                    break;
                }
            } 
        }
        else if (p<q)
        {
           for(i=q;i<=p*q;i++)
            {
                if (i%p==0&&i%q==0)
                {
                    k=i;
                    break;
                }
            }  
        }
    }
    if (p<0)
    {
        p*=-1;
        if (p>=q)
        {
            for(i=p;i<=p*q;i++)
            {
                if (i%p==0&&i%q==0)
                {
                    k=i;
                    p*=-1;
                    break;
                }
            } 
        }
        else if (p<q)
        {
           for(i=q;i<=p*q;i++)
            {
                if (i%p==0&&i%q==0)
                {
                    k=i;
                    p*=-1;
                    break;
                }
            }  
        }
    }

    a=-k/p;
    b=k/(q*q);
    c=-2*b*x1;
    d=b*x1*x1+y1;
 
    cout << a << "y" << " = " << b << "x^2" << " + " << c << "x" << " + " << d << endl;
    return 0;
}