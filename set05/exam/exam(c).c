#include <stdio.h>
typedef struct Fritacole {
    char name[100];
    int height, integrity, interest, ability, discipline, goals, foul;
} fri;
typedef struct Game {
    int point, foul;
} game;
typedef struct Team{
    int goals;
} team;
int input() {
    int n;
    printf("Enter the number of players in each team: ");
    scanf("%d", &n);
    return n;
}
void players(fri team[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", team[i].name);
        printf("Enter height: ");
        scanf("%d", &team[i].height);
        printf("Enter integrity: ");
        scanf("%d", &team[i].integrity);
        printf("Enter interest: ");
        scanf("%d", &team[i].interest);
        printf("Enter ability: ");
        scanf("%d", &team[i].ability);
        printf("Enter discipline: ");
        scanf("%d", &team[i].discipline);
    }
}
void teampoints(game team[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter no of points scored: ");
        scanf("%d", &team[i].point);
        printf("Enter no of fouls: ");
        scanf("%d", &team[i].foul);
    }
}
void goalpoints(team team[], int n){
    for (int i = 0; i < n; i++) {
        printf("Enter no of goals: ");
        scanf("%d", &team[i].goals);
    }

}
int Points(fri team1[], fri team2[], int n) {
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++) {
        if ((team1[i].height > team2[i].height) || (team1[i].goals > team2[i].goals) || (team1[i].foul < team2[i].foul)) {
            s1 += 1;
        } else {
            s2 += 1;
        }
    }
    return s1 - s2;
}
void verify_win(int points) {
    if (points > 0) {
        printf("Team 1 is better than Team 2\n");
    } else if (points < 0) {
        printf("Team 2 is better than Team 1\n");
    } else {
        printf("Teams have the same score\n");
    }
}
int main() {
    int n;
    n = input();
    fri team1[n], team2[n];
    printf("Enter details for Team 1:\n");
    players(team1, n);
    goalpoints(team1, n);
    printf("Enter details for Team 2:\n");
    players(team2, n);
    goalpoints(team2, n);
    int points = Points(team1, team2, n);
    verify_win(points);
    return 0;
}
