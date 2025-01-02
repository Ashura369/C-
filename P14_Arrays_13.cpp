// find second largest element in an array

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max1 = arr[0], max2 = -1; //here you have to initialized max2 with an invalid value
    // max2 is initialized to -1, which indicates that a second largest number hasn't been found yet.

    for(int i = 1; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1; // itmeans if new max1 finds new larger value in the array, then max2's value will be "max2=a[0]", bcoz initially max1's value was "max1=a[0]"
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if(max2 == -1) {
        cout << "No second largest element." << endl; 
        // If max2 remains -1, it indicates no distinct second largest element was found, 
        // which is then handled by the code.
    } else {
        cout << "The second largest element is: " << max2 << endl;
    }
    return 0;
}