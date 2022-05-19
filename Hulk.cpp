#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i;
    string s="I hate ";
    for(i=1;i<=n;i++)
    {
        cout<<s;
        if(i%2!=0) s="that I love ";
        else s="that I hate ";
    }
    cout<<"it"<<endl;




    return 0;
}
