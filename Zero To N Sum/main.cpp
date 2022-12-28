#include <iostream>

using namespace std;
//Write a program that asks the user for a number n and prints the sum of the numbers 1 to n
int main()
{
    int n;
    int i;
    float sum;
    cout << " How many number you want to sum ? Starting From ,Enter a number: " << endl;
    cin >> n;
    for(i=1;i<=n;i++){
        sum = sum+i;
    }
     cout<< "Summation of all number:" << sum<< endl;

    return 0;
}
