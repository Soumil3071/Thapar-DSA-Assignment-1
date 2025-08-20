#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, d, e;
    cout << "Enter rows and columns for first matrix: ";
    cin >> a >> b;
    cout << "Enter rows and columns for second matrix: ";
    cin >> d >> e;

    if (b != d) {
        cout << "Matrix multiplication not possible " << endl;
        return 1;
    }

    int arr[20][20], arr2[20][20], arr3[20][20]; 

    cout << "Enter elements for first matrix:" << endl;
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            cin >> arr[i][j];

    cout << "elements for second matrix:" << endl;
    for (int i = 0; i < d; i++)
        for (int j = 0; j < e; j++)
            cin >> arr2[i][j];

    for (int i = 0; i < a; i++)
        for (int j = 0; j < e; j++)
            arr3[i][j] = 0;
    
    for (int i = 0; i < a; i++)
        for (int j = 0; j < e; j++)
            for (int y = 0; y < b; y++)
                arr3[i][j] += arr[i][y] * arr2[y][j];

    cout << "Result matrix:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < e; j++)
            cout << arr3[i][j] << " ";
        cout << endl;
    }

    return 0;
}