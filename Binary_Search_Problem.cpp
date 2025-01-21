/* #include <iostream>
#include <algorithm>
using namespace std;

// Function to find the minimum number of pages.
int fndpages(int A[], int N, int M) {
    if (M > N)
        return -1;

    int start = 0, end = 0, mid, ans;
    for (int i = 0; i < N; i++) {
        start = max(start, A[i]);
        end += A[i];
    }

    while (start <= end) {
        mid = start + (end - start) / 2;
        int pages = 0, count = 1;
        for (int i = 0; i < N; i++) {
            pages += A[i];
            if (pages > mid) {
                count++;
                pages = A[i];
            }
        }
        if (count <= M) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int N, M;
    cout << "Enter the number of books: ";
    cin >> N;
    cout << "Enter the number of students: ";
    cin >> M;

    int A[N];
    cout << "Enter the pages of each book: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int result = fndpages(A, N, M);
    if (result == -1) {
        cout << "Not enough books for students.\n";
    } else {
        cout << "The minimum number of pages that a student has to read is: " << result << endl;
    }
    return 0;
} */

// Painter Partition Problem 

/* #include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

// Function to check if it is possible to paint all boards within 'mid' time with 'K' painters
bool isFeasible(vector<int>& boards, int N, int K, int mid) {
    int painters = 1;
    int totalTime = 0;

    for (int i = 0; i < N; i++) {
        if (boards[i] > mid) return false;

        totalTime += boards[i];

        if (totalTime > mid) {
            painters++;
            totalTime = boards[i];
        }

        if (painters > K) return false;
    }
    return true;
}

// Function to find the minimum time required to paint all boards
int painterPartition(vector<int>& boards, int N, int K) {
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);
    int result = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isFeasible(boards, N, K, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int N, K;
    cout << "Enter the number of boards: ";
    cin >> N;
    cout << "Enter the number of painters: ";
    cin >> K;

    vector<int> boards(N);
    cout << "Enter the length of each board: ";
    for (int i = 0; i < N; i++) {
        cin >> boards[i];
    }

    int minTime = painterPartition(boards, N, K);
    cout << "The minimum time required to paint all boards is: " << minTime << endl;

    return 0;
} */

/* #include <iostream>
#include <vector>
#include <numeric> // For accumulate
#include <algorithm> // For max_element
using namespace std;

// Function to check if it is possible to ship all packages within 'days' using 'capacity'
bool isPossible(vector<int>& weights, int days, int capacity) {
    int total = 0, requiredDays = 1;

    for (int weight : weights) {
        if (total + weight > capacity) {
            requiredDays++;
            total = weight;
            if (requiredDays > days) return false;
        } else {
            total += weight;
        }
    }

    return true;
}

// Function to find the minimum capacity required to ship all packages within 'days'
int shipWithinDays(vector<int>& weights, int days) {
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    int result = high;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (isPossible(weights, days, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, days;
    cout << "Enter number of packages: ";
    cin >> n;
    cout << "Enter number of days: ";
    cin >> days;

    vector<int> weights(n);
    cout << "Enter package weights: ";
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    int result = shipWithinDays(weights, days);
    cout << "Minimum ship capacity to deliver packages in " << days << " days is: " << result << endl;

    return 0;
}*/ 


