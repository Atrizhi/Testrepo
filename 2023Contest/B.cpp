#include<bits/stdc++.h>
using namespace std;
string s1;
int main()
{
    cin>>s1;
    if(s1.size()%3!=0)
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0;i<s1.size();i+=3)
    {
        string temp=s1.substr(i,3);
        if(temp!="<><" && temp!="><>")
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}