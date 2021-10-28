#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int tc;
    cin>>tc;
    while(tc)
    {
        int n;
        cin>>n;
        int s_no[n];
        for(int i=0;i<n;i++)
            cin>>s_no[i];
        int mini=*max_element(s_no,s_no+n);
        int street=s_no[0];
        
        for(int i=0;i<n;i++)
        {
            int cost=0;
            for(int j=0;j<n;j++)
                cost+=abs(s_no[i]-s_no[j]);
            if(cost<=mini)
            {
                if(cost == mini && street<s_no[i])
                    continue;
                mini=cost;
                street=s_no[i];
            }
        }
        cout<<street<<endl;
        tc--;
    }
    return 0;
}
