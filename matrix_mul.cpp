#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2;

    // Input rows and columns of first matrix
    cout << "Enter rows and columns of the first matrix: ";
    cin >> r1 >> c1;

    int A[10][10];

    // Input elements of first matrix
    cout << "Enter elements of the first matrix:" << endl;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }

    // Input rows and columns of second matrix
    cout << "Enter rows and columns of the second matrix: ";
    cin >> r2 >> c2;

    int B[10][10];

    // Input elements of second matrix
    cout << "Enter elements of the second matrix:" << endl;

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }

    // Check whether multiplication is possible
    if (c1 != r2)
    {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }

    // Result matrix
    int result[10][10];

    // Matrix multiplication
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < c1; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    cout << "\nResult Matrix:" << endl;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << result[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
