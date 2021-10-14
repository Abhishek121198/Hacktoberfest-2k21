#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
      
        int n;
        cin>>n;
        int a[n],r=0;
        float s=0.00,avg;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        avg=float(s/n);
        if(avg==1)
        {
            r=0;
        }
       
        else if(avg>1)
        {
            r=s-n;
        }
        else if(avg<0)
        {
            r=1;
        }
        cout<<r<<endl;
        
    }
    return 0;
}
