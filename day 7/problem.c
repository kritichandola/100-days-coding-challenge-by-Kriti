#include <stdio.h>

#define STADIUMS 3
#define MAX_GOALS 100
#define PLAYERS 5


int goals[STADIUMS][MAX_GOALS];
int goalCount[STADIUMS] = {0};
int playerGoals[PLAYERS] = {0};

void addGoalToStadium(int minute, int stadium, int playerID)
{
    if (goalCount[stadium] >= MAX_GOALS)
    {
        printf("Stadium %d is full!\n", stadium);
        return;
    }

    goals[stadium][goalCount[stadium]] = minute;
    playerGoals[playerID]++;
    goalCount[stadium]++;
}

int totalGoals()
{
    int total = 0;

    for (int s = 0; s < STADIUMS; s++)
    {
        total += goalCount[s];
    }

    return total;
}

int topScorer()
{
    int maxG = 0;
    int winner = 0;

    for (int p = 0; p < PLAYERS; p++)
    {
        if (playerGoals[p] > maxG)
        {
            maxG = playerGoals[p];
            winner = p;
        }
    }

    return winner;
}

void displayStadium(int stadium)
{
    for (int i = 0; i < goalCount[stadium]; i++)
    {
        printf("%d ", goals[stadium][i]);
    }

}
int main()
{
    addGoalToStadium(12, 0, 1);
    addGoalToStadium(35, 0, 2);
    addGoalToStadium(78, 1, 1);

    printf("Total Goals: %d\n", totalGoals());

    printf("Top Scorer Player ID: %d\n", topScorer());

    printf("Goals in Stadium 0: ");
    displayStadium(0);

    printf("\n");

    return 0;
}