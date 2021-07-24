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

long long arr[1004];
long long n,given_cont;

bool Container(ll milk)
{
    ll i,j,needing_cont=1,milk_of_cont=0;
    
    for(i=1;i<=n;i++)
    {
        if(milk_of_cont+arr[i]<=milk)
        {
            milk_of_cont+=arr[i];
        }
        else{
            milk_of_cont=arr[i];
            needing_cont++;
        }
    }

    if(needing_cont>given_cont)
    {
        return false;
    }
    else{
        return true;
    }
}



int Binary_search(long long mn,long long sum)
{
    ll l,h,mid,ans;
    l=mn;
    h=sum;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(Container(mid))
        {
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    return ans;

}

int main()
{
    int test_case;
    cin>>test_case;
    /*cout.precision(10);
    cout << fixed;*/
    for(int cas=1; cas<=test_case; cas++)
    {
        ll i,j=0,ans,score,mx=0,sum=0,mn=0;
        cin>>n>>given_cont;

        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            mn=max(mn,arr[i]);
        }

        ans=Binary_search(mn,sum);

        cout<<"Case "<<cas<<": "<<ans<<endl;

    }
    return 0;
}
