#include<iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;

    if(n%2)
    {
        cout<<0;
        return 0;

    }

    n/=2;
    if(n%2)
          {

              cout<<n/2;
          }
    else
        cout<<n/2-1;


}
