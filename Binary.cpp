#include <iostream>
using namespace std;

/* int main()
{  Decimal to Binary
     int num;
    cout << "Enter the number: ";
    cin >> num;
    int rem, ans = 0, mul = 1;

    while (num > 0)
    {
        // Remainder
        rem = num % 2;
        // Quotient
        num = num / 2; // num/=2;
        // Answer
        ans = rem * mul + ans; // ans+= rem*mul;
        // Multiplicaation
        mul = mul * 10; // mul *= 10;
    }

    cout << ans<<endl;

   // Binary to Decimal

   int num;
   cout<<"Enter the number: ";
   cin>>num;
   int mul = 1, ans = 0, rem;

   while(num>0)
   {
    // Remainder
    rem = num % 10;
    // Divide Number by 10
    num = num / 10;
    // Answer
    ans = mul * rem + ans;
    // Multiplication
    mul *= 2;
   }

   cout<<ans<<endl; 

    // Binary to Octal

    {
        int binaryNum;
        cout << "Enter the binary number: ";
        cin >> binaryNum;

        int decimalNum = 0, base = 1, rem;

        // Convert Binary to Decimal
        while (binaryNum > 0)
        {
            rem = binaryNum % 10;
            decimalNum += rem * base;
            base *= 2;
            binaryNum /= 10;
        }
        int octalNum = 0, mul = 1;

        // Convert decimal to octal
        while (decimalNum > 0)
        {
            rem = decimalNum % 8;
            octalNum += rem * mul;
            mul *= 10;
            decimalNum /= 8;
        }
        cout << "Octal equivalent: " << octalNum << endl;
    }
} */