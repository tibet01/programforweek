#include <iostream>
#include <math.h>
using namespace std;
struct list
{
    char name[50];
    float math, thai, sci, eng, socail, gpa;
};

int main()
{
    float grade[7];
    struct list data[7];
    for (int i = 0; i < 7; i++)
    {
        scanf("%s %f %f %f %f %f", data[i].name, &data[i].thai, &data[i].math, &data[i].sci, &data[i].eng, &data[i].socail);
        grade[i] = (data[i].thai * 1.5 + data[i].math * 2 + data[i].sci * 2 + data[i].eng * 1.5 + data[i].socail * 1) / 8;
        data[i].gpa = grade[i];
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (grade[i] > grade[j])
            {
                swap(grade[i], grade[j]);
            }
        }
    }
    if (grade[0] > 0 && grade[7] > 0)
    {
        cout << "The highest grade is : ";
        printf("%.2f\n", grade[6]);
        cout << "The person who got the highest grade is ";
        for (int i = 0; i < 7; i++)
        {
            if (data[i].gpa == grade[6])
            {
                cout << data[i].name << " ";
            }
        }
        cout << "\nThe lowest grade is : ";
        printf("%.2f\n", grade[0]);
        cout << "The person who got the lowest grade is ";
        for (int i = 0; i < 7; i++)
        {
            if (data[i].gpa == grade[0])
            {
                cout << data[i].name << " ";
            }
        }
    }
    else cout << "ERROR";
    return 0;
}
