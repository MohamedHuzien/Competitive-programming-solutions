#include<iostream>
using namespace std;

int main(){

    int n , resultValue = 0;
    string statment;
    cin>>n;
    for(int i=0; i<n; i++){
        
        cin>>statment;  
        int checkIndex = 0;
        if(statment[checkIndex] == 'X')
            checkIndex = 1;

        if(statment[checkIndex] == '-')
            resultValue--;
        else
            resultValue++;
        }
        
        cout<<resultValue;  
    return 0;
}