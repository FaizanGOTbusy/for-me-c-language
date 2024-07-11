#include <stdio.h>

int main()
{
    int age;
    printf("mate what was your age\n");
    scanf("%d", &age);

    printf ("howdy partner your age is %d is it?.\n", age);                         


    if (age>=18)   
    {
        printf ("you can vote boah!!\n");
        
        
    }

    else if(age== 17){

        printf("only 1 year mate have patience will yer\n");
    }

    else if(age>10){
    
        printf("you can't vote boah. i'm sorry, lemme know if i can help yer\n");

    }

    else{
        printf ("you are a toddler kiddo. skaddadle outta here\n");
    }

    return 0;
}


