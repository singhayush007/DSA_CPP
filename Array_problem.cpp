/* #include <iostream>
using namespace std;

// Search an element in an array.
int search(int arr[], int N, int X)
{
    // Your code here

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == X)
            return i;
    }

    return -1;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    int start = 0, end = 5;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    };

    for (int i = 0; i < 6; i++)
        cout << arr[i] << "  ";
}

// Find Second largest element.

#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int ans = INT_MIN; // Largest element
    int second = INT_MIN; // Second largest element

    // Find the largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > ans) {
            ans = arr[i];
        }
    }

    // Find the second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] != ans) {
            second = max(second, arr[i]);
        }
    }

    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, n);
    cout << "The second largest element is: " << secondLargest << endl;
    return 0;
}

// Fibonacci Series

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[1000];
    // first = 0;
    // second = 1;

    arr[0] = 0;
    arr[1] = 1;

    for (int i =2; i<=n-1; i++)
    arr[i] = arr[i=1] + arr[i-2];

    cout<<arr[n-1]<<"  ";
} 


#include <iostream>
using namespace std;

void fun(int a[], int n)
{
    cout<<sizeof(a)<<endl;
    for (int i = 0; i<n; i++)
    cout<<a[i]<<" ";
}

int main()
{
    int arr[5] = {3,2,1,6,7};
    cout<<sizeof(arr)<<endl;
    fun(arr,5);
} */