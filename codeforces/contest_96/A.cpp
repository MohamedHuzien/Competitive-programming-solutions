#include<iostream>
using namespace std;

int main(){
    string players;
    int danger = 1;
    cin>>players;
    char previose = players[0];
    for(int i=1; i<players.size(); i++){
       if(players[i] == previose){
           danger++;
       }else{
           danger = 1;
        }
        
        if(danger >= 7){
            break;
        }
        previose = players[i];
    }

    if(danger >= 7)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}