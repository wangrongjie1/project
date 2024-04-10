#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(const vector<int>& a) {
    int size = a.size();
    int max_so_far = 0, max_ending_here = 0;
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}

int main() {
    vector<int> a = { -10, 20, -4, 13, -5, -2,6,4,2 };
    cout << "Maximum contiguous sum is " << maxSubArraySum(a);
    return 0;
}