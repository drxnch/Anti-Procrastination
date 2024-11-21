#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int main(void)
{
    // Initialise variables here
    bool exit = false;
    int choice = 0;

    // Intro to executable
    printf("Welcome to anti-procrastination.\nWe have everything needed for productivity and focus.\nChoose from the options below you freak.\n");

    // Running loop
    while (!exit)
    {
        // Print out options
        printf("1. Pomodoro Timer\n2. To-Do List\n3. Habit Tracking\n4. Exit\n");
        printf("Option selected: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            int time;
            printf("You need time to focus. OK let's go, how long\n");
            printf("Time needed (minutes): ");
            scanf("%d", &time);
            time *= 60;
            start_timer(time);
            break;
        case 2:
            printf("You have entered the to-do list zone. It's empty.\n");
            break;
        case 3:
            printf("You're seeing if you're any better than yesterday?\nWell you've come to the right place\n");
            break;
        case 4:
            printf("Bye bye. Don't head straight to instagram after this.\nMaybe enjoy the sunshine outside!\n");
            exit = true;
            break;
        default:
            printf("Can you read??? Try again.\n");
            break;
        }
    }
    return 0;
}

void start_timer(int seconds)
{
    int remaining = seconds;
    while (remaining > 0)
    {
        printf("Time remaining: %d seconds\n", remaining);
        sleep(1); // Sleep for 1 second
        remaining--;
    }
    printf("Time's up!\n");
}