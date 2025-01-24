#include <iostream>
#include <vector>
#include <algorithm> // for sort, binary_search, find

using namespace std;

int main()
{  /*
    // Create vector, declare 
    vector<int> v;
    vector<int> v1(5, 1);
    
    // Size and capacity
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;
    
    // Update Value
    v[1] = 5;
    cout << "Size of v1: " << v1.size() << endl;
    cout << "Capacity of v1: " << v1.capacity() << endl;
    v1.push_back(8);
    cout << "Size of v1 after push_back: " << v1.size() << endl;
    cout << "Capacity of v1: " << v1.capacity() << endl;
    
    vector<int> v3 = {1, 2, 3, 4, 5};

    // Delete value from vector
    vector<int> vnew;
    vnew.push_back(4);
    vnew.push_back(14);
    vnew.push_back(51);
    vnew.pop_back();
    cout << "Size of vnew: " << vnew.size() << endl;
    cout << "Capacity of vnew: " << vnew.capacity() << endl;

    vnew.erase(vnew.begin() + 1);
    cout << "Size of vnew after erase: " << vnew.size() << endl;
    cout << "Capacity of vnew: " << vnew.capacity() << endl;

    for (int i = 0; i < vnew.size(); i++)
        cout << vnew[i] << " ";
    
    vnew.insert(vnew.begin() + 1, 50); // Insert value 
    cout << endl;
    
    for (int i = 0; i < vnew.size(); i++)
        cout << vnew[i] << " ";

    vnew[1] = 37;
    for(int i = 0; i < vnew.size(); i++)
        cout << vnew[i] << "  ";
    
    vnew.clear(); // Remove all the elements
    cout << "Size of vnew: " << vnew.size() << endl;
    cout << "Capacity of vnew: " << vnew.capacity() << endl;
   
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(12);
    arr.push_back(122);
    arr.push_back(212);
    cout << arr[0] << endl; 
    cout << arr.front() << endl; 
    cout << arr[arr.size() - 1] << endl; 
    cout << arr.back() << endl; 

    // Sort in increasing order
    vector<int> ans = {2, 12, 122, 212}; // Added for demonstration
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;

    // Sort in decreasing order
    sort(ans.begin(), ans.end(), greater<int>());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;

    // Search in binary search
    cout << binary_search(ans.begin(), ans.end(), 54) << endl;

    // Find element in vector
    auto it = find(ans.begin(), ans.end(), 54);
    if (it != ans.end())
        cout << "Element found at index: " << it - ans.begin() << endl;
    else
        cout << "Element not found" << endl;

    return 0; 
}
*/