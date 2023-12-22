#include <stdio.h>

int main() {
    int totalHoursNeeded, numberOfDays, numberOfWorkers;

    printf("Enter total number of hours needed: ");
    scanf("%d", &totalHoursNeeded);

    printf("Enter number of days: ");
    scanf("%d", &numberOfDays);

    printf("Enter number of workers: ");
    scanf("%d", &numberOfWorkers);

    int totalWorkingDays = numberOfDays - (numberOfDays * 10 / 100);  
    int totalWorkingHours = totalWorkingDays * numberOfWorkers * 8;   
    int overtimeHours = totalWorkingDays * numberOfWorkers * 2;       

    int totalAvailableHours = totalWorkingHours + overtimeHours;

    if (totalAvailableHours >= totalHoursNeeded) {
        int hoursLeft = totalAvailableHours - totalHoursNeeded;
        printf("Yes! %d hours left.\n", hoursLeft);
    } else {
        int additionalHours = totalHoursNeeded - totalAvailableHours;
        printf("Not enough time! %d hours needed.\n", additionalHours);
    }

    return 0;
}
