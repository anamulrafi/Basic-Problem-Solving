#include <iostream>

using namespace std;
/* Problem: Write a program that asks the user for a number n and prints the sum of the numbers 1 to n
Modify the previous program such that only multiples of three or five are considered in the sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17 */
int main()
{
 int n;
    int i;
    float sum;
    cout << " How many number you want to sum ? Starting From ,Enter a number: " << endl;
    cin >> n;
    for(i=1;i<=n;i++){
    if(i%3==0 || i%5==0){
       sum = sum+i;
    }
    }
     cout<< "Summation of all number:" << sum<< endl;
    return 0;
}
