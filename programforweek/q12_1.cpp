#include <iostream>
#include <string.h>
#include <algorithm>
#include <math.h>
using namespace std;

struct key
{
    int x, y;
    char top[150], bot[150], key[150];
};

template <typename T>
void sw(T& x, T& y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}
int main()
{

    key data;
    cin >> data.x >> data.y >> data.top >> data.bot >> data.key;
    if (1 <= data.x && data.x <= 127 && 1 <= data.y && data.y <= 127)
    {
        for (int i = 0; i < data.x; i++)
            if (data.top[i] > data.bot[i])
                sw(data.top[i], data.bot[i]);

        for (int i = 0; i < data.y; i++)
        {
            for (int j = 0; j < data.x; j++)
            {
                if (data.key[i] > data.bot[j])
                    data.key[i] = data.bot[j];

                else if (data.key[i] < data.top[j])
                    data.key[i] = data.top[j];
            }
        }
        cout << data.key;
    }
    return 0;
}