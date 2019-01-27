#include<iostream>
#include<string>
using namespace std;

int main(){

    string word;
    cin>>word;
    word =  (char) toupper(word[0]) + word.substr(1);
    cout<< word;    
    return 0;
}