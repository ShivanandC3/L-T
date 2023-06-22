#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time getTimeDifference(struct Time startTime, struct Time endTime);

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time:\n");
    printf("Hours: ");
    scanf("%d", &(startTime.hours));
    printf("Minutes: ");
    scanf("%d", &(startTime.minutes));
    printf("Seconds: ");
    scanf("%d", &(startTime.seconds));

    printf("\nEnter the end time:\n");
    printf("Hours: ");
    scanf("%d", &(endTime.hours));
    printf("Minutes: ");
    scanf("%d", &(endTime.minutes));
    printf("Seconds: ");
    scanf("%d", &(endTime.seconds));

    difference = getTimeDifference(startTime, endTime);

    printf("\nTime difference: %d hours, %d minutes, %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}

struct Time getTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time difference;

    int startSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;
    int totalSeconds = endSeconds - startSeconds;

    difference.hours = totalSeconds / 3600;
    difference.minutes = (totalSeconds % 3600) / 60;
    difference.seconds = (totalSeconds % 3600) % 60;

    return difference;
}
