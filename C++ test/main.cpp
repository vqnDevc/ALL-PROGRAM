#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a;
    int sum=0;
    int count=0;
    for(int i=1;i<=2;i++)
    {
        cin>>a;
        if(a=='A')
            count++;
        if(a=='J' || a=='Q' || a=='K')
        sum+=10;
        else
            if(a=='A')
                sum +=11;
            else
                sum+=a-48;
    }
    if(count==2)
    {
        cout<<2;
        return 0;
    }
    cout<<sum;
}
