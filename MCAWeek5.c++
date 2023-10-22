// This week contains operations on arrays
#include <bits/stdc++.h>
using namespace std;
void week5A1()
{
    // create and display array
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of arrray: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The stored array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void week5A2()
{
    // sum of all elements in array
    int n;
    int sum = 0;
    cout << "Enter length of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of arrray: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The stored array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << endl;
    cout << "The sum of the array is: " << sum;
}
void week5A3()
{
    // length of the array
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The stored array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // the concept is the size of 4 bytes of each elemnt so here we did sizeof(arr) i.e (n*4bytes)/4bytes gives us n, where n is the number of elements.
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "The length of the given array is: " << length;
}
void week5A4()
{
    int n;//elements in array
    cout <<"Enter array size: ";
    cin >>n;
    int arr[n];//created an array of size n
    cout <<"enter the elements: "<<endl;
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }
    cout<<"The stored array is: ";
    for(int i=0; i<n; i++){
        cout <<arr[i] <<" ";
    }
    int largest = arr[0];
    int secLargest = arr[0];
    for(int i =0; i<n; i++){
        //loop has stared comparing arr[i] to largest element and it will reassign the values after comparison
        if(arr[i]>largest){
            secLargest=largest;
            largest=arr[i];
            //else if line is written to solve the repetition issue
            //so the comparison is to check if ith index value is gr8er than secl && != largest then secLargest=arr[i] for eg. 1 5 4 here after sec loop largest was 5 so to third loop when arr[i] was not gr8er than largest we went to else if the condn arr[i]>secl and arr[i]!=largest which sets right with 4 and 1 so secLargest is than reassigned as 4  
        }else if(arr[i]>secLargest && arr[i]!=largest){
            secLargest=arr[i];
        } 
    }
    cout<<"The second largest element is: "<<secLargest;
}
void week5A5()
{
    // reverse the array
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The stored array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The reversed array is: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
void week5A6A()
{
    //Addition of matrices
    int row1, col1, row2, col2;
    cout << "Enter number of rows for first matrix: ";
    cin >> row1;
    cout << "Enter number of columns for first matrix: ";
    cin >> col1;
    cout << "Enter all the elements of first matrix: " << endl;
    int matrix1[row1][col1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter number of rows for second matrix: ";
    cin >> row2;
    cout << "Enter number of columns for second matrix: ";
    cin >> col2;
    cout << "Enter all the elements of second matrix: " << endl;
    int matrix2[row2][col2];
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> matrix2[i][j];
        }
    }
   // logic for addition new Sum matrix is made at this point
    int sum[row1][col1];
    if (row1 != row2 || col1 != col2)
        cout << "Addition cannot be performed as both matrices have different dimensions";
    else
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        // representation of sum matrix
        cout << "The resultant matrix is: " << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }
}
void week5A6M()
{
    int row1, col1, row2, col2;
    cout << "Enter number of rows for first matrix: ";
    cin >> row1;
    cout << "Enter number of columns for first matrix: ";
    cin >> col1;
    cout << "Enter all the elements of first matrix: " << endl;
    int matrix1[row1][col1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter number of rows for second matrix: ";
    cin >> row2;
    cout << "Enter number of columns for second matrix: ";
    cin >> col2;
    cout << "Enter all the elements of second matrix: " << endl;
    int matrix2[row2][col2];
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    int product[row1][col2];
    if (row1 != col2)
    {
        cout << "Can't multiply the given matrices, conditions not met";
    }
    else
    {
        // initialize product matrix
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                product[i][j] = 0;
            }
        }
        // now multiplication
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < col1; k++)
                {
                    product[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        // calling the matrix
        cout << "The product matrix is: " << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << product[i][j] << " ";
            }
            cout << endl;
        }
    }
}
void week5A7()
{
    //display +ve, -ve, odd, even
    int n;
    cout << "Enter number of elements in array : \n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pos = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            pos++;
            if (arr[i] % 2 == 0)
            {
                even++;
                cout << "arr[" << i << "]= " << arr[i] << " is even positive number";
            }
            else
            {
                cout << "arr[" << i << "]= " << arr[i] << " is odd positive number";
            }
        }
        else
        {
            cout << "arr[" << i << "]= " << arr[i] << " is negative number";
        }
        cout << endl;
    }
    cout << "Total positive array elements : " << pos << endl
         << "Total negative array elements : " << n - pos << endl
         << "Total even array elements : " << even << endl
         << "Total odd array elements : " << pos - even << endl;
}
void week5A8()
{
    //merge 2 sorted arrays and sort the result
    int arr1[] = {0, 2, 4, 9, 11};
    int arr2[] = {1, 5, 7, 10};
    int m = 5;
    int n = 4;
    // merge two sorted arrays in inc
    int result[m + n];
    int i = 0; // to iterate on arr1
    int j = 0; // to iterate on arr2
    int k = 0; // to iterate on result

    while (i < m and j < n)
    // loop running till exhaustion
    {
        if (arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            result[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < m)
    {
        // arr2 was exhausted but we still got elements in arr1
        result[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n)
    {
        // arr1 was exhausted but we still got elements in arr2
        result[k] = arr2[j];
        k++;
        j++;
    }

    // display result
    cout << "The resultant array: ";
    for (int i = 0; i < (m + n); i++)
    {
        cout << result[i] << " ";
    }
}
void week5A9()
{
    //frequency of a particular number 
    int n, target, count = 0;
    cout << "Enter number of elements in list : \n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of list : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Entered array : \n[ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";

    cout << "\nEnter target element : \n";
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
    cout << "Frequency of " << target << " in list = " << count;
}
void week5()
{
    int n;
    cout << "Enter Question number: ";
    cin >> n;
    switch (n)
    {
    case 1:
        week5A1();
        break;
    case 2:
        week5A2();
        break;
    case 3:
        week5A3();
        break;
    case 4:
        week5A4();
        break;
    case 5:
        week5A5();
        break;
    case 6:
        char X;
        cout<<"Function to Perform- Addition(A) or Multiplication(M): ";
        cin>>X;
        switch (X)
        {
        case 'A':
            week5A6A();
            break;
        case 'M':
            week5A6M();
            break;
        
        default:
            cout << "Invalid Entry Select either A or M. ";
            break;
        }
        break;
    case 7:
        week5A7();
        break;
    case 8:
        week5A8();
        break;
    case 9:
        week5A9();
        break;
    default:
        cout << "Invalid question number. ";
        break;
    }
}
int main()
{
    week5();
    return 0;
}