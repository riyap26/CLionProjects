#include <stdio.h>
#include <string.h>


struct state {
    char name[30];
    long int pop;
    float litRate;
    float income;
} stat[20];

void accept_states(int n, struct state all_states[]) {
    for (int i=0; i<n; i++){
        printf("Enter state name:\n");
        scanf("%s", &all_states[i].name);

        printf("Enter population:\n");
        scanf("%ld", &all_states[i].pop);

        printf("Enter literacy rate:\n");
        scanf("%f", &all_states[i].litRate);

        printf("Enter total income:\n");
        scanf("%f", &all_states[i].income);
    }
}

void find_maxes (int n, struct state every_state[]){
    int maxLit = 0;
    int maxIncome = 0;
    int lr=-1, inc =-1;

    for (int i=0; i<n; i++){
        if (every_state[i].litRate > maxLit){
            maxLit = every_state[i].litRate;
            lr++;
        }
        if (every_state[i].income > maxIncome){
            maxIncome = every_state[i].income;
            inc++;
        }
    }
    printf ("State with the highest literacy rate is: %s\n", every_state[lr].name);
    printf ("State with the income is: %s\n", every_state[inc].name);

}


int main(){

    int n;

    printf("Enter how many state you will enter:\n");
    scanf("%d", &n);

    accept_states(n, stat);
    find_maxes(n, stat);

}


