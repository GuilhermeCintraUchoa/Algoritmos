#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> list = {3, 4, 7, 1, 2, 5, 8, 9};

    for (int i = 0; i < list.size() - 2; i++)
    {
        for (int j = 0; j < list.size() - 2 - i; j++)
        {
            if (list[j + 1] < list[i])
            {
                int copy = list[j];
                list[j] = list[j + 1];
                list[j + 1] = copy;
            }
        }
    }

    for (int i = 0; i < list.size(); i++)
    {

        cout << list[i] << ' ';
    }

    cout << "\n";
    return 0;
}