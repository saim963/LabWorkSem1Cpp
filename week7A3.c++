#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double sum = 0.0, mean, stdDev = 0.0;
    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n <= 0) {
        cerr << "Invalid input. Number of elements should be greater than 0." << endl;
    }
    // Create an array to store the numbers
    double arr[n];
    // Input the elements
    cout << "Enter the " << n << " real numbers:"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    // Calculate the mean
    mean = sum / n;
    // Calculate the standard deviation
    for (int i = 0; i < n; i++) {
        stdDev += pow(arr[i] - mean, 2);
    }
    stdDev = sqrt(stdDev / n);
    // Output the results
    cout << "Sum: " << sum << endl;
    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << stdDev << endl;
}