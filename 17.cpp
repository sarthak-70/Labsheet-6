#include <iostream>
using namespace std;
int main() {
    int n, key, found=0;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << "Enter number to check: ";
    cin >> key;
    for(int i=0; i<n; i++)
        if(arr[i] == key) found = 1;
    if(found) cout << "Number is present.";
    else cout << "Number is not present.";
    return 0;
}
