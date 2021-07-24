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
        ll n,j=0,ans=0,score,mx=0;
        cin>>n;
        int arr[n+4];
        map<ll,ll>mp;
        set<ll>st;
        vector<ll>vec;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        arr[0]=0;
        for(int i=1; i<=n; i++)
        {
            int diff=arr[i]-arr[i-1];

            vec.push_back(diff);
            mp[diff]++;

        }
        sort(vec.begin(),vec.end());
        int max_diff=vec.back();
        int times=mp[max_diff];

        // cout<<max_diff<<" "<<times<<endl;

        if(times>1)
        {
            ans=max_diff+1;
        }
        else
        {
            ans=max_diff;
            int x=ans;
            for(int i=1; i<=n; i++)
            {
                // cout<<x<<" "<<vec[i]<<endl;
                // cout<<i<<" "<<x<<" "<<arr[i]<<endl;

                if(x>(arr[i]-arr[i-1]))
                {

                }
                else if(x==(arr[i]-arr[i-1]))
                {
                    x--;
                }
                else
                {
                    ans++;
                    break;
                }
            }
        }

        cout<<"Case "<<cas<<": "<<ans<<endl;


    }
    return 0;
}

