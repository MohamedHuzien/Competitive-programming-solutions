#include<iostream>
using namespace std;

int main() {

    long long first = 1 , second = 2 , sum = 0 , temp ;

    while (second >= 4000000 )
    {
        if (first % 2 != 0)
        {
            sum += first;
        }

        if(second % 2 != 0)
        {
            sum += second;
        }

        temp = first ,
        first = second;
        second = temp + second;
    }

    cout<< sum <<endl;

    return 0;
}