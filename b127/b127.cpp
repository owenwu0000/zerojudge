#include <iostream>
using namespace std;


int fib(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}


int main(){
    int n,a1=1,a2=1;
    //int ans[46];
    while(cin >> n)
    {
        cout << fib(n+1) << endl;
    }
    
    
    /*ans[0]=1;
    ans[1]=1;
    for (int i=2;i<46;i++)
    {
        ans[i]=ans[i-1]+ans[i-2];
    }
    while (cin >> n)
    {
        cout << ans[n] << endl;
    }*/
   return 0;
}