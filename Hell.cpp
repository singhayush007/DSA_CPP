#include <iostream>
using namespace std;
#include <cmath>

/* char convert(char name)
{
    char ans = name-'a'+'A';
    return ans;
}

int main()
{
    char name;
    cin>>name;

    cout<<convert(name);

    return 0;
}
int countdigit(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }

    return count;
}

bool Armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n = n / 10;
        ans = ans + pow(rem, digit);
    }
    if (ans == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cin >> num;

    // Count digit
    int digit = countdigit(num);

    // Armstrong number
    cout << Armstrong(num, digit) << endl;
}

// Training Zeros in Factorial


    int trailingZeros (int N)
    {
        int count = 0;
        while (N >= 5)
        {
            count += N /5;
            N /= 5;
        }
        return count;
    }
*

// Total Moves for Bishop!

int solve(int A, int B)
{
    int count = 0;

    count += min(A - 1, B - 1);
    count += min(8 - A, B - 1);
    count += min(A - 1, 8 - B);
    count += min(8 - A, 8 - B);
    return count;
}
    int main() {
    int A = 4, B = 4; // आप अपने इनपुट के अनुसार वैल्यू बदल सकते हैं
    cout << "Number of moves: " << solve(A, B) << endl;
    return 0;
} */


