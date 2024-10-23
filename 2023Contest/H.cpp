#include<bits/stdc++.h>
using namespace std;
int n;
bool flag,use[20];
int stick[20],ans[20],cot;
bool check(int x,int y,int z)
{
    if(x+y>z && x+z>y && y+z>x)return true;
    return false;
}
void dfs(int now)
{
    if(flag)return;
    if(now==n)
    {
        cout<<"Yes"<<endl;
        flag=true;
        for(int i=0;i<3*n;i++)
        {
            cout<<ans[i]<<' ';
            if((i+1)%3==0)cout<<endl;
        }
        return;
    }
    for(int i=1;i<=3*n;i++)
    {
        if(use[i])continue;
        use[i]=1;
        for(int j=1;j<=3*n;j++)
        {
            if(use[j])continue;
            use[j]=1;
            for(int z=1;z<=3*n;z++)
            {
                if(use[z])continue;
                use[z]=1;
                if(check(stick[i],stick[j],stick[z]))
                {
                    ans[cot]=stick[i];
                    ans[cot+1]=stick[j];
                    ans[cot+2]=stick[z];
                    cot+=3;
                    dfs(now+1);
                    ans[cot]=0;
                    ans[cot+1]=0;
                    ans[cot+2]=0;
                    cot-=3;
                }
                use[z]=0;
            }
            use[j]=0;
        }
        use[i]=0;
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=3*n;i++)cin>>stick[i];
    dfs(0);
    if(!flag)cout<<"No"<<endl;
    return 0;
}