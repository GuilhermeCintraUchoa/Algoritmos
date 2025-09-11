#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> list = {0, 1, 1, 1, 2, 4, 6, 3};

    for (int i = 0; i < list.size() - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < list.size(); j++)
        {
            if (list[j] < list[min])
            {
                min = j;
            }
        }

        int copy = list[i];
        list[i] = list[min];
        list[min] = copy;
    }

    for (int i = 0; i < list.size(); i++)
    {

        cout << list[i] << ' ';
    }

    cout << "\n";

    return 0;
}