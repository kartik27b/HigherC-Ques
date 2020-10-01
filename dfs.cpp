#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main()
{
    fastio;
    int n;
    cin>>n;
    if(n%400==0)
        cout<<"12.09."<<n;
    else if(n%4==0&&n%100!==0)
        cout<<"12.09."<<n;
    else
        cout<<cout<<"13.09."<<n;a
}

/*(n%400==0)||
&&(n%100!=0)
*/
