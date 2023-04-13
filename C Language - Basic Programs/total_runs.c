#include <stdio.h>
int main()
{
   int numPlayers, i, runs, totalRuns = 0;
   printf("Enter the number of players: ");
   scanf("%d", &numPlayers);
   for (i = 1; i <= numPlayers; i++) {
      printf("\nEnter the runs scored by player %d: ", i);
      scanf("%d", &runs);
      totalRuns += runs;
   }
   printf("\nTotal runs scored by the team: %d\n", totalRuns);
   return 0;
}
