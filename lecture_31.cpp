#include <iostream>
using namespace std;
// Finding the Factorial using the RECURSION:
int factorial(int n)
{
    // Base case:
    if (n == 0)
    {
        return 1;
    }
    int ans = n * factorial(n - 1);
    return ans;
}
// Finding the power using the RECURSION:
int power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = 2 * power(n - 1);
    return ans;
}
// Print the numbers:
void print(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    print(n - 1);
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // calling factorial function:
    int ans1 = factorial(n);
    cout << "The Factorial of " << n << " is: " << ans1 << endl;
    // calling power function:
    int ans2 = power(n);
    cout << "The Power of 2^" << n << " is: " << ans2 << endl;
    // calling print function:
    print(n);
}