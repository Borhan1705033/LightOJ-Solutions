#include<bits/stdc++.h>
using namespace std;

///////  short form //////////
#define ll long long
#define pi 3.14159265
#define mod 1e9+7
#define pb push_back;
#define N 1e5
#define FAST  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define FF fflush(stdout);

/////// short Function /////////
#define lcm(a,b) (a*b)/__gcd(a,b)



int main()
{
    int test_case;
    cin>>test_case;
    /*cout.precision(10);
    cout << fixed;*/
    for(int cas=1; cas<=test_case; cas++)
    {
        ll n,m,i,j=0,ans=0,score,mx=0,sum=0,mn=0;
        string str;
        cin>>n>>str;

        for(i=0;i<n;i++)
        {
            if(str[i]=='.')
            {
              ans++;
              i+=2;
            }
        }


        cout<<"Case "<<cas<<": "<<ans<<endl;

    }
    return 0;
}
