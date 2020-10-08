#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    char a[n + 2][m + 2];
    int br[m + 3];
    for (int i = n; i >= 1; i--)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= m; i++)
        cin >> br[i];
    for (int i = 1; i <= m; i++)
    {
        if (br[i] > 0)
        {
            int v = 0, h = 0;
            for (int j = n; j >= 1 && v == 0; j--)
            {
                if (a[j][i] == 'O')
                {
                    h++;
                    for (int k = j + 1; k <= j + br[i] && k <= n; k++)
                    {
                        a[k][i] = '#';
                    }
                    v++;
                }
            }
            if (h == 0)
            {
                for (int k = 1; k <= br[i]; k++)
                {
                    a[k][i] = '#';
                }
            }
        }
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}