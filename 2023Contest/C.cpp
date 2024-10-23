#include<bits/stdc++.h>
using namespace std;
const int MAXN=2*1e5+10;
int n,x,y;
int maxx,maxy,minx,miny;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        maxx=max(maxx,x);
        minx=min(minx,x);
        maxy=max(y,maxy);
        miny=min(y,miny);
    }
    cout<<(maxx-minx)*(maxy-miny)<<endl;
    return 0;
}