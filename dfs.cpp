#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(false);cout.tie(false)

int main()
{
    fastio;
    int n;
    cin>>n;
    if(n%400==0)
        cout<<"12.09."<<n;
    else if(n%4==0&&n%100!==0)
        cout<<"12.09."<<n;

    double j;
    cin>>j;
    if(j%400==0)
        cout<<"12.09."<<j;
    else if(j%4==0&&j%100!==0)
        cout<<"12.09."<<j;

    else
        cout<<cout<<"13.09."<<j;
}

/*(n%400==0)||
&&(n%100!=0)
*/
