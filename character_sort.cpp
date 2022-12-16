#include <bits/stdc++.h>
using namespace std;

void SORT(vector<char> vec)
{
    int i, j, n = vec.size();
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if ((int)vec[j] > (int)vec[j + 1])
                swap(vec[j], vec[j + 1]);
        }
    }
    for (auto ele : vec)
        cout << ele << " ";

}

int main()
{
    int n;
    cin >> n;
    vector<char> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    SORT(v);

    return 0;
}
