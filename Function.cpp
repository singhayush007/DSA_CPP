#include <iostream>
using namespace std;

/* int sum(int m, int n) // Function Declare
{
    int ans = m + n; // Function Define
    return ans;
}

int mul(int m, int n) // Fuction Declare
{
    int ans = m * n; // Function Define
    return ans;
}

void fun()
{
    cout<<"Hello Coder Army\n";
}


int main()
{
    int a, b;
    cout << "Enter the First Number: ";
    cin >> a;
    cout << "Enter the Second Number: ";
    cin >> b;

    // Function Call
    cout << sum(a, b);
    cout << endl;
    cout << mul(a, b);
    cout << endl;
    fun();
} 
bool Prime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int Fact(int n)           // int fact(int n = 3) ---> Default Parameter 
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans = ans * i;

    return ans;
}
int main()
{
    int a, b;
    cout << "Enter the number: ";
    cin >> a;
    cout << "Enter the number: ";
    cin >> b;

    // A is prime or Not
    cout << Prime(a) << endl;

    // A ka Factorial
    cout << Fact(a) << endl;

    // B is prime or Not
    cout << Prime(b) << endl;

    // B ka factorial
    cout << Fact(b) << endl;

    // B -A is Prime or Not 
    cout << Prime(b-a) << endl;

    //  B - A ka factorial;
    cout << Fact(b-a) << endl;
} 

void    Swap (int &a , int &b) // Pass by reference
{
    int c;
    c = a;
    a  = b;
    b = c;
}

void Swap ( float &c , float &d) // Function Overloading
{
    float r = c;
    c = d;
    d = r;
}



int main ()
{
    int a , b;
    cin>>a>>b;

    swap (a , b);
    cout<<a<<" "<<b<<endl;

    float f1 = 4.8, f2 = 3.6;
    Swap ( f1, f2);
    cout<<f1<<" "<<f2;
} */
