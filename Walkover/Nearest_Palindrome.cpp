#include <bits/stdc++.h>
typedef unsigned long long int ll;

using namespace std;

int isPalindrome(int num)
{
    int n, k, rev = 0;
    n = num;
    while (num != 0)
    {
        k = num % 10;
        rev = (rev * 10) + k;
        num = num / 10;
    }

    if (n == rev) return 1;
    else return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int num;
    cin >> num;
    num=num+1;

    while (!isPalindrome(num))  num = num + 1;
  
    cout << num;
    return 0;
}
