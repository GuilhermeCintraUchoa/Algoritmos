#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int left, int right)
{

    int pivot = arr[right];

    int i = left - 1;

    for (int j = left; j < right; j++)
    {
        if (arr[j] <= pivot)
        {
            i = i + 1;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[right];
    arr[right] = temp;
    return i + 1;
}

void quicksort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {

        int pi = partition(arr, left, right);

        quicksort(arr, left, pi - 1);
        quicksort(arr, pi + 1, right);
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nCasos;
    int arraySize;
    int arrayElements;

    cin >> nCasos;

    for (int i = 0; i < 3; i++)
    {
        cin >> arraySize;
        vector<int> array;

        for (int j = 0; j < arraySize; j++)
        {
            cin >> arrayElements;
            array.push_back(arrayElements);
        }

        quicksort(array, 0, arraySize - 1);

        for (int u = 0; u < arraySize; u++)
        {
            cout << array[u] << " ";
        }
        cout << "\n";
    }

    return 0;
}