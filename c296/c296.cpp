#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m,k;
    int current=0;
    cin >> n >> m >> k;
    vector<int> num;
    for(int i=1;i<n+1;i++)
    {
        num.push_back(i);
    }
    while(k)
    {
        current=(current+m)%(num.size())==0 ? num.size()-1 : (current+m)%(num.size())-1;
        num.erase(num.begin()+current);
        k--;
    }
    if(num.size()==1)
    {
        cout << num[0] << endl;
    }
    else
    {
        if(current==num.size())
        {
            cout << num[0] << endl;
        }
        else
        {
            cout << num[current] << endl;
        }
    }
    return 0;
}