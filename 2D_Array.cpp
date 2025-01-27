#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

void printcol(int arr[][4], int row, int col)
{
    // Print Column Wise
    for (int j = 0; j < col; j++)
        for (int i = 0; i < row; i++)
            cout << arr[i][j] << "  ";
    cout << endl;
}

void printrowmax(int arr[][4], int row, int col)
{
    int index = -1, sum = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
            total += arr[i][j];

        if (total > sum)
        {
            sum = total;
            index = i;
        }
    }
    cout << "Row with maximum sum is: " << index << " (Sum: " << sum << ")" << endl;
}

void printsumig(int matrix[][3], int row, int col)
{
    int first = 0;
    int sec = 0;

    // First Diagonal Sum
    for (int i = 0; i < row; i++)
        first += matrix[i][i];

    // Second Diagonal Sum
    for (int i = 0, j = col - 1; j >= 0; i++, j--)
        sec += matrix[i][j];

    cout << "First diagonal sum: " << first << endl;
    cout << "Second diagonal sum: " << sec << endl;
}

int main()
{
    // Create 2D Arrays
    int arr1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    int arr2[3][4] = {
        {0, 1, 3, 5},
        {7, 9, 11, 13},
        {15, 17, 19, 21}};
    int ans[3][4];

    // Example: Add two Matrices
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 4; col++)
            ans[row][col] = arr1[row][col] + arr2[row][col];

    cout << "Matrix Addition Result:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
            cout << ans[row][col] << "  ";
        cout << endl;
    }

    // Print Row index with maximum sum
    printrowmax(arr1, 3, 4);

    // Print Diagonal Sum
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    printsumig(matrix, 3, 3);

    return 0;
}

