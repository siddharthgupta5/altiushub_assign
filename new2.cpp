#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& a,int s,int e)
{
    while(s<e)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }
}
void rotate(vector<int>& a,int k)
{
    int n=a.size();
    k=k%n;
    if(k==0)
    {
        return;
    }
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
}
int main()
{
    int k=4;
    vector<int> a ={1,2,3,4,5,6,7,8,9,10};
    cout<<"Initially:";
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    rotate(a,k);
    cout<<"After Rotation:";
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}