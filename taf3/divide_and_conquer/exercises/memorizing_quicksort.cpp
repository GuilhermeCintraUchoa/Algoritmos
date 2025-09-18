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

    vector<int> array;

    int numElements;
    cin >> numElements;

    for (int i = 0; i < numElements; i++)
    {
        int element;
        cin >> element;
        array.push_back(element);
    }

    quicksort(array, 0, array.size() - 1);

    for (int i = 0; i < numElements; i++)
    {
        cout << array[i] << " ";
    }

    cout << "\n";

    return 0;
}