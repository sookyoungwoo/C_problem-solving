#include<stdio.h>
int main()
{
    int a,c,d,e,f,g,h,j,k;
    char b[1000] = { 0 },i;
    scanf("%d ", &a);
    gets(b);
    scanf("%d", &c);
    for (d = 0; d < c; d++)
    {
        scanf("%d %d", &e, &f);
        if (e > f)
        {
            g = f;
            f = e;
            e = g;
        }
        h = f - e;
        j = e-1;
        k = f-1;
        if (h % 2 != 0)
        {
            h += 1;
        }
        for (g = 0; g < h / 2; g++)
        {
            i = b[j];
            b[j] = b[k];
            b[k] = i;
            j++;
            k--;
        }
    } 
	puts(b);
}
