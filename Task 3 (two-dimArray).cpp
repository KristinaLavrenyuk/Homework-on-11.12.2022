
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char array[100][100]{};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array[i][j] = '*';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i <= (n - m) / 2 - 1 || i >= n / 2 - 1 + m) || (j <= (n - m) / 2 - 1 || j >= n / 2 - 1 + m)) cout << array[i][j];
            else cout << ' ';
        }
        cout << endl;
    }
    system("pause");
}
