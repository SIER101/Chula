#include <bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high];
        int pi = low - 1;
        for (int j = low; j <= high; j++)
            if (arr[j] < pivot)
                swap(arr[++pi], arr[j]);
        swap(arr[++pi], arr[high]);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n = 6;
    int arr[6] = {10, 7, 8, 9, 1, 5};
    quickSort(arr, 0, n - 1);
    cout << "Sorted Array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
