#pragma warning(disable:4996)
#include<stdio.h>
#define N 102
typedef struct
{
    int sx, sy, ex, ey;
} Robot;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int i, j, k, head = -1, tail = 0;
    int G[N][N] = { 0 }, dap[N * N][2], r[4][2] = { {-1,0},{0,-1},{1,0},{0,1} };
    int s1, s2, e1, e2;
    Robot road[N * N];
    bool t = false;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            scanf("%d", &G[i][j]);
            G[i][j] = !G[i][j];
        }
    }
    scanf("%d %d %d %d", &s1, &s2, &e1, &e2);
    road[0].sx = road[0].sy = -1;
    road[0].ex = s1;
    road[0].ey = s2;
    G[s1][s2] = -1;
    do
    {
        int p = road[++head].ex;
        int q = road[head].ey;
        for (i = 0; i < 4; i++)
        {
            if (G[p + r[i][0]][q + r[i][1]] == 1)
            {
                road[++tail].sx = p;
                road[tail].sy = q;
                road[tail].ex = p + r[i][0];
                road[tail].ey = q + r[i][1];
                G[p + r[i][0]][q + r[i][1]] = G[p][q] - 1;
            }
            if (p + r[i][0] == e1 && q + r[i][1] == e2)
            {
                t = true;
                break;
            }
        }
        if (t)
            break;
    }

    while (head <= tail);
    printf("%d\n", e2 );
    for (i = 0, j = tail; j > 0; i++)
    {
        printf("%d %d\n",road[j].sx, road[j].sy);
        dap[i][0] = road[j].ex;
        dap[i][1] = road[j].ey;
        for (k = j - 1;; k--)
        {
            if (road[j].sx == road[k].ex && road[j].sy == road[k].ey)
                break;
        }
        j = k;
    }
}