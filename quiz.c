#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int count, i, n, r;
    char name[100];
    char choice;
home:
    system("cls");
    printf("\t\tWelcome to the Quiz\n");
    printf("\tpress S to start the game\n");
    printf("\tpress Q to quit the game\n");
    choice = toupper(getch());
    if (choice == 'Q')
    {
        goto exit;
    }
    else if (choice == 'S')
    {

        count = 0;
        for (i = 1; i <= 2; i++)
        {
            r = i;
            switch (r)
            {
            case 1:
                printf("what is the name of the first President of India?\n");
                printf("A. Narendra Modi\t B. Rajendra Prasad\nC. Jawaharlal Nehru\t D. None of these\n");
                if (toupper(getch()) == 'B')
                {
                    printf("Correct, Press any key.\n");
                    getch();
                    break;
                }
                else
                {
                    printf("The Correct Answer is B, Press any key.\n");
                    getch();
                    break;
                }

            case 2:
                printf("Who founded GOOGLE?\n");
                printf("A. Sundar Pichai\t B. Larry Page & Sergey Brin\t C. Bill Gates\t D. Mark Zuckerberg\n");
                if (toupper(getch()) == 'B')
                {
                    printf("Correct, Press any key.\n");
                    getch();
                    goto home;
                }
                else
                {
                    printf("The Correct Answer is B, Press any key.\n");
                    getch();
                    goto home;
                }
            }
        }
    }
    else
    {
        system("cls");
        printf("enter something valid.");
        getch();
        goto home;
    }
exit:
    system("cls");
    printf("Are you sure? press Y to  exit, press any to go back.\n");
    if (toupper(getch()) == 'Y')
    {
        exit(0);
    }
    else
    {
        goto home;
    }
}