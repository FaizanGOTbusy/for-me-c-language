#include <stdio.h>

int main()
{
    int age, marks;

    printf("enter your age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 3:

        printf("so your age is 3 eh\n do you want your marks press 1 if you do\n");
        scanf("%d", &marks);

        switch (marks)
        {

        case 1:
            printf("your marks are 50");

            break;
        default:
            printf("we don't have your marks");
        }
        break;

    case 15:
        printf("so your age is 15 eh\n");
        break;
    case 7:
        printf("so your age is 7 eh\n");
        break;

    default:
        printf("damn you ain't telling me yo age\n?");

        break;
    }

    return 0;
}
