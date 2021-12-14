#include <bits/stdc++.h>
using namespace std;

void leftrotatebyone(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
    arr[i] = arr[i + 1];
        
    arr[n - 1] = temp;
}
void leftrotatebyd(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
    leftrotatebyone(arr, n);
        
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr);

    leftrotatebyd(arr, 2, n);
    printarray(arr, n);

    return 0;
}
