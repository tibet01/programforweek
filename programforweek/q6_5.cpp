#include<stdio.h>
#include<string.h>
struct team
{
    char n[25];
    int shoot[4];
    int score, c1, c2;
};


int main()
{
    int shoott, scoret, c1t, c2t;
    char nt[25];
    struct team team[5], sort;
    for (int i = 0; i < 4; i++)
    {
        scanf(" %s", &team[i].n);
        team[i].score = 0;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &team[i].shoot[j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (team[i].shoot[j] > team[j].shoot[i]) team[i].score += 3;
            else if ((team[i].shoot[j] == team[j].shoot[i]) && i != j) team[i].score += 1;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        team[i].c1 = 0;
        team[i].c2 = 0;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            team[i].c1 = team[i].c1 + team[i].shoot[j] - team[j].shoot[i];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            team[i].c2 = team[i].c2 + team[i].shoot[j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (team[i].score < team[j].score)
            {
                strcpy(nt, team[i].n);
                strcpy(team[i].n, team[j].n);
                strcpy(team[j].n, nt);

                scoret = team[i].score;
                team[i].score = team[j].score;
                team[j].score = scoret;

                c1t = team[i].c1;
                team[i].c1 = team[j].c1;
                team[j].c1 = c1t;

                c2t = team[i].c2;
                team[i].c2 = team[j].c2;
                team[j].c2 = c2t;
            }
            else if (team[i].score == team[j].score)
            {
                if (team[i].c1 < team[j].c1)
                {
                    strcpy(nt, team[i].n);
                    strcpy(team[i].n, team[j].n);
                    strcpy(team[j].n, nt);

                    scoret = team[i].score;
                    team[i].score = team[j].score;
                    team[j].score = scoret;

                    c1t = team[i].c1;
                    team[i].c1 = team[j].c1;
                    team[j].c1 = c1t;

                    c2t = team[i].c2;
                    team[i].c2 = team[j].c2;
                    team[j].c2 = c2t;
                }
                else if (team[i].c1 == team[j].c1)
                {
                    if (team[i].c2 < team[j].c2)
                    {
                        strcpy(nt, team[i].n);
                        strcpy(team[i].n, team[j].n);
                        strcpy(team[j].n, nt);

                        scoret = team[i].score;
                        team[i].score = team[j].score;
                        team[j].score = scoret;

                        c1t = team[i].c1;
                        team[i].c1 = team[j].c1;
                        team[j].c1 = c1t;

                        c2t = team[i].c2;
                        team[i].c2 = team[j].c2;
                        team[j].c2 = c2t;
                    }
                }
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%s %d\n", team[i].n, team[i].score);
    }

    return 0;
}
