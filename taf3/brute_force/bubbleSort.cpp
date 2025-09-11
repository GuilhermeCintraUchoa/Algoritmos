#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> list = {3, 4, 7, 9, 2, 5, 8, 1};

    for (int i = 0; i < list.size() - 1; i++)
    {
        for (int j = 0; j < list.size() - 1 - i; j++)
        {
            if (list[j + 1] < list[j])
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