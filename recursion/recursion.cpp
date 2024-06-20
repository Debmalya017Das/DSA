#include <iostream>
using namespace std;

// By printing above the recursive function we perform general recursion and below it is basically backtracking
void rec1(int i, int n)
{
    if (i < 0)
        return;
    cout << i << " ";
    rec1(i - 1, n);
    cout << i << " "; // backtracking ( getting the increment outputs from -)
}
void rec2(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    rec2(i + 1, n);
    // cout << "backtracking "; // getting the decrement outputs by using +
    cout << i << " ";
}

// parameterized rec

void rec3(int i, int n)
{
    if (i < 0)
    {
        cout << n << endl;
        return;
    }

    rec3(i - 1, n + i);
}
int main()
{
    int n;
    cout << "Enter the n : ";
    cin >> n;
    cout << "Outputs of 1st func :";
    rec1(n, n);
    cout << "Outputs of 2nd func :";
    rec2(0, n);
    cout << "Sum using parameterized rec: ";
    rec3(n, 0);
    return 0;
}