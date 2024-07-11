#include <stdio.h>

int main()
{

    int answer;
    printf("which subjects have you passed?\n 1)Math?\n 2)science\n 3)both?\n");

    scanf("%d", &answer);

    printf("so your answer is %d is it\n", answer);

    if (answer == 1)
    {
        printf("your reward is 15 rupees for passing math, you're a reputed guy. well done");
    }

    else if (answer == 2)
    {
        printf("your reward is 15 rupees for passing science");
    }

    else if (answer == 3)
    {
        printf("you pass both take 40 rupees");
    }

    else
    {
        printf("theres no reward for failures");
    }

    return 0;
}