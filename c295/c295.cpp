#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m,s=0;
    vector<int> vec;
    cin >> n >> m;
    int num[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> num[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        int temp=0;
        for(int j=0;j<m;j++)
        {
            if(num[i][j]>temp)
            {
                temp=num[i][j];
            }
        }
        vec.push_back(temp);
        s+=temp;
    }
    bool a=0;
    int k;
    cout << s << endl;
    for (int i=0;i<n;i++)
    {
        if(s%vec[i]==0)
        {
            cout << vec[i] ;
            a=1;
            k=i+1;
            break;
        }
    }
    for (int i=k;i<n;i++)
    {
        if(s%vec[i]==0)
        {
            cout << " " << vec[i] ;
            a=1;
        }
    }
    if(a==0)
    {
        cout << "-1";
    }
    

    return 0;
}