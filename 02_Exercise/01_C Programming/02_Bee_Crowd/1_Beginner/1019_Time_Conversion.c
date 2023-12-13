#include <stdio.h>
#include <stdlib.h>
int main()
{

    int seconds;
    scanf("%d", &seconds);
    int hours, minutes;
    hours = seconds / 3600;
    int remainingSeconds;
    remainingSeconds = seconds - hours * 3600;
    minutes = remainingSeconds / 60;
    remainingSeconds = abs(remainingSeconds - minutes * 60);
    printf("%d:%d:%d\n", hours, minutes, remainingSeconds);
    return 0;
}
/* by chat gpt:
#include <stdio.h>
#include <stdlib.h>

#define SECONDS_PER_HOUR 3600
#define SECONDS_PER_MINUTE 60

int main() {
    int seconds;

    // Input validation
    printf("Enter seconds: ");
    if (scanf("%d", &seconds) != 1 || seconds < 0) {
        printf("Invalid input\n");
        return 1; // Return an error code
    }

    int hours, minutes, remainingSeconds;

    hours = seconds / SECONDS_PER_HOUR; // Calculate hours
    remainingSeconds = seconds % SECONDS_PER_HOUR; // Calculate remaining seconds after hours

    minutes = remainingSeconds / SECONDS_PER_MINUTE; // Calculate minutes
    remainingSeconds = remainingSeconds % SECONDS_PER_MINUTE; // Calculate remaining seconds after minutes

    printf("%d:%d:%d\n", hours, minutes, remainingSeconds);
    return 0;
}

*/