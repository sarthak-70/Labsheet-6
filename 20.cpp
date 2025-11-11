#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements (sorted ascending): ";
    cin >> n;
    int arr[n];
    cout << "Enter sorted elements:\n";
    for(int i=0; i<n; i++) cin >> arr[i];
    // Largest element in sorted array is last element
    cout << "Largest element = " << arr[n-1];
    return 0;
}
