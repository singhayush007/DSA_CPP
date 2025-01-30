#include <iostream>
#include <vector> 
using namespace std;

int main()
{
    // Create 2-D Vector
    int n, m;
    cout << "Enter rows and columns: ";
    cin >> n >> m;

    // Dynamically sized matrix with all elements initialized to 1
   vector<vector<int> > matrix(n, vector<int>(m, 1));

    // Print the matrix
    cout << "Matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Print matrix dimensions
    cout << "Rows = " << matrix.size() << endl;
    cout << "Columns = " << matrix[0].size() << endl;

    return 0;
}
