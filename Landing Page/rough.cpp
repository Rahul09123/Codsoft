#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        // 1st pattern printed
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        //2nd pattern printed
        int col=2;
        while(col<=i){
            cout<<"*"<<" ";
            col++;
        }
        // 3rd pattern printed
        int star = i-1;
        while(star){
            cout<<"*"<<" ";
            star--;
        }
        // 4th pattern printed
        int k = n-i+1;
        while(k){
            cout<<k<<" ";
            k--;    
        }cout<<endl;
        i++;
    }
    return 0;
}