#include <cstdlib>
#include<iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n ; cin>>n;
    
    int sub;
    for(int i=2 ; i<n/2 + 1 ; i+=2)
    {
        sub = n - i;
        if(sub % 2 ==0 )
        {
            cout<<"YES";
            return 0;
        }
    }
    
    cout<<"NO";
    return 0;
}
