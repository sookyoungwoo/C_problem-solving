#include <iostream>
using namespace std;
const char *ha[] = { "pop","no","zip","zotz","tzec","xul","yoxkin","mol",
                  "chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};
const char* tz[] = { "imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk",
                  "ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau" };
int day, mon, year, sum;
char month[9];
int main()
{
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   scanf("%d", &day);
   scanf("%s", month);
   scanf("%d", &year);
   for (int a = 0; a < 19; a++) {
      if (ha[a][0] == month[0]) {
         if (ha[a][1] == month[1]) {
            mon = a;
         }
      }
   }
   sum = year * 365 + mon * 20 + day + 1;
   int k = sum;
   int r_year, r_day = 0, r_mon = -1;

   r_year = sum / 260;
   for (int a = 0; a < sum; a++) {
      r_day++;
      r_mon++;
      if (r_day == 14)
         r_day = 1;
      if (r_mon == 20)
         r_mon = 0;
   }
   if (r_day == 13 && r_mon == 19) r_year -= 1;
   printf("%d %s %d\n", r_day, tz[r_mon], r_year);
   return 0;
}
