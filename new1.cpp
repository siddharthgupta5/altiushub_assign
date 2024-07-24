#include<bits/stdc++.h>
using namespace std;

int maxsubarray(vector<int>& a)
{
    vector<int>b(a.size());
    b[0]=a[0];
    for(int i=1;i<a.size();i++)
    {
        b[i]=max(a[i],b[i-1]+a[i]);
    }
    return *max_element(b.begin(),b.end());
}
int main()
{
    
    vector<int> a ={-2,-3,-5,1,4,2,8,-8,20};
    cout<<"Max:"<<maxsubarray(a)<<endl;
    return 0;
}