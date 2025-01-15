/* Sorting is a process to arrage a data in systematic way in database .

#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 4, 1, 3, 2, 7};

    for (int i = 0; i < 5; i++)
    {
        int index = i;
        for (int j = j + 1; j < 6; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }

        swap(arr[i], arr[index]);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "  ";
    }
}


#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n ;
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<"Enter the elements in an array: ";
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    for (int i = 0; i < n-1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }

        swap(arr[i], arr[index]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";

    }
}
*/

