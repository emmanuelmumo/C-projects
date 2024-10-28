#include <stdio.h>

int main() {
    /*Ask the user to input the number for the day of the week and the current hour*/
    int Day;
    int Hour;

    /*Ask the user for the day of the week*/
    printf("Enter the number for the day of the week: ");
    scanf("%d", &Day);

    /*Ask the user for the current hour*/
    printf("Enter the number for the current hour: ");
    scanf("%d", &Hour);

    /*Check the day of the week*/
    switch (Day) {
        case 1:
            printf("Too much coffee.");
            break;
        case 2:
            printf("Same as Monday!!");
            break;
        case 3:
            printf("Mmmh, Boring");
            break;
        case 4:
            printf("Waiting for friday!");
            break;
        case 5:
            printf("Hurrah!!");
            break;
        case 6:
            printf("Sleep alot ");
            break;
        case 7:
            printf("Here comes Monday, argh! ");
            break;
        default:
            printf("Invalid day. Please enter a number between 1 and 7.\n");
            /*End the program if the day is invalid*/
            return 0;
    }

    /*Validate the day if it is Weekday(1 to 5), otherwise use the one for weekend*/
    if (Day >= 1 && Day <= 5) {
        /*Afternoon or morning*/
        if (Hour < 12) {
            printf("Good Morning!\n");
        } else {
            printf("Good Afternoon!\n");
        }
    }

    return 0;
}
