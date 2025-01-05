#include <iostream>
using namespace std;

/* int main()
{
    int row, col;
    int n;
    cout << "Enter the input: ";
    cin >> n;

    for (row = 1; row <= n; row = row + 1)
    {
        // space print
        for (col = 1; col <= n - row; col = col + 1)
            cout << "  ";

        // star print
        for (col = 1; col <= 2 * row - 1; col = col + 1)
            cout << "* ";

        cout << endl;
    }
} */

/* int main()
{
    int row, col;
    int n;
    cout << "Enter the input: ";
    cin >> n;

    for (row = 1; row <= n; row = row + 1)
    {
        // space print
        for (col = 1; col <= n - row; col = col + 1)
            cout << "  ";

        // 1 to row
        for (col = 1; col <= row; col = col + 1)
            cout << col << " ";

        // row - 1 to 1
        for (col = row - 1; col >= 1; col = col - 1)
            cout << col << " ";

        cout << endl;
    }
} */

/* int main()
{
    int row, col;
    int n;
    cout << "Enter the input: ";
    cin >> n;

    for (row = n; row >= 1; row = row - 1)
    {
        // space print
        for (col = 1; col <= n - row; col = col + 1)
            cout << "  ";

        // star print

        for (col = 1; col <= 2 * row - 1; col = col + 1)
            cout << "* ";

        cout << endl;
    }
} */

/* #include <iostream>
using namespace std;

int main() {
    int row, col;
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // Upper part of the pattern
    for (row = n; row >= 1; row--) {
        // Print stars
        for (col = 1; col <= row; col++) {
            cout << "* ";
        }
        // Print spaces
        for (col = 1; col <= 2 * (n - row); col++) {
            cout << "  ";
        }
        // Print stars
        for (col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower part of the pattern
    for (row = 1; row <= n; row++) {
        // Print stars
        for (col = 1; col <= row; col++) {
            cout << "* ";
        }
        // Print spaces
        for (col = 1; col <= 2 * (n - row); col++) {
            cout << "  ";
        }
        // Print stars
        for (col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
} */

/* int main()
{

    int row, col;
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (row = 1; row <= n; row = row + 1)
    {
        // star print
        for (col = 1; col <= row; col = col + 1)
            cout << "* ";

        // space print
        for (col = 1; col <= 2 * n - 2 * row; col = col + 1)
            cout << "  ";

        // star print
        for (col = 1; col <= row; col = col + 1)
            cout << "* ";
        cout << endl;
    }
    for (row = n - 1; row >= 1; row = row - 1)
    {
        // star print
        for (col = 1; col <= row; col = col + 1)
            cout << "* ";

        // space print
        for (col = 1; col <= 2 * n - 2 * row; col = col + 1)
            cout << "  ";

        // star print
        for (col = 1; col <= row; col = col + 1)
            cout << "* ";
        cout << endl;
    }
} */
