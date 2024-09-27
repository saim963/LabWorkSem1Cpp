#include <bits/stdc++.h>
using namespace std;
// Shift+Alt+F - Format the entire active file.
// Alt+q for codesnap
// These patterns are from G4G

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int k = (2 * n - (2 * i - 1)); k >= 1; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * (n - i) - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern10(int n)
{
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int k = n - i; k >= 1; k--)
        {
            cout << "  ";
        }
        for (int k = n - i; k >= 1; k--)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern13(int n)
{
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}
void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int A = 65;
        for (int j = i; j >= 1; j--)
        {
            cout << (char)A;
            A++;
        }
        cout << endl;
    }
}
void pattern15(int n)
{

    for (int i = 1; i <= n; i++)
    {
        int A = 65;
        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << (char)A;
            A++;
        }
        cout << endl;
    }
}
void pattern16(int n)
{
    int A = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)A;
        }
        A++;
        cout << endl;
    }
}
void pattern17(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        char X = 'A';
        int brkpnt = (2*i-1)/2;
        for(int j=1; j<=(2*i-1); j++){
            cout<<X;
            if(j<=brkpnt) X++;
            else X--;
        }
        cout<<endl;
    }
}
void patternExtra(int n)
{

    for (int i = 1; i <= n; i++)
    {
        int X = 65;
        if (i >= 2)
        {
            for (int j = 1; j <= n - 1; j++)
            {
                int Y = X + j - 1;
                cout << (char)Y;
                Y++;
            }
        }

        cout << endl;
    }
}

void patterns()
{
    int n;
    cout << "Enter pattern number: ";
    cin >> n;
    switch (n)
    {
    case 1:
        pattern1(5);
        break;
    case 2:
        pattern2(5);
        break;
    case 3:
        pattern3(5);
        break;
    case 4:
        pattern4(5);
        break;
    case 5:
        pattern5(5);
        break;
    case 6:
        pattern6(5);
        break;
    case 7:
        pattern7(5);
        break;
    case 8:
        pattern8(5);
        break;
    case 9:
        pattern9(5);
        break;
    case 10:
        pattern10(5);
        break;
    case 11:
        pattern11(5);
        break;
    case 12:
        pattern12(5);
        break;
    case 13:
        pattern13(5);
        break;
    case 14:
        pattern14(5);
        break;
    case 15:
        pattern15(5);
        break;
    case 16:
        pattern16(5);
        break;
    case 17:
        pattern17(5);
        break;
    case 18:
        patternExtra(5);
        break;
    default:
        cout << "Invalid pattern number. ";
    }
}

int main()
{
    patterns();
}