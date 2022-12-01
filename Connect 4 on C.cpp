#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void printboard(char num[7], char a[7], char b[7], char c[7], char d[7], char e[7], char f[7])
{
    printf("\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d", num[i]);
    }
    printf("\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");

    for (int i = 0; i < 7; i++)
    {
        printf("%c", b[i]);
    }
    printf("\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%c", c[i]);
    }
    printf("\n");

    for (int i = 0; i < 7; i++)
    {
        printf("%c", d[i]);
    }
    printf("\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%c", e[i]);
    }
    printf("\n");

    for (int i = 0; i < 7; i++)
    {
        printf("%c", f[i]);
    }
    printf("\n");
}

char putchip(int choice, char a[7], char b[7], char c[7], char d[7], char e[7], char f[7])
{

    if (f[choice - 1] != 'O')
    {
        if (e[choice - 1] != 'O')
        {
            if (d[choice - 1] != 'O')
            {
                if (c[choice - 1] != 'O')
                {
                    if (b[choice - 1] != 'O')
                    {
                        if (a[choice - 1] != 'O')
                        {
                            return 'z';
                        }
                        else
                            return 'a';
                    }
                    else
                        return 'b';
                }
                else
                    return 'c';
            }
            else
                return 'd';
        }
        else
            return 'e';
    }
    else
        return 'f';
}

int checkboard(char a[7], char b[7], char c[7], char d[7], char e[7], char f[7])
{
    int i;

    //check horizontal
    for (i = 0; i < 4; i++)
    {
        if (a[i] == 'X' && a[i + 1] == 'X' && a[i + 2] == 'X' && a[i + 3] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (a[i] == '+' && a[i + 1] == '+' && a[i + 2] == '+' && a[i + 3] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    for (i = 0; i < 4; i++)
    {
        if (b[i] == 'X' && b[i + 1] == 'X' && b[i + 2] == 'X' && b[i + 3] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (b[i] == '+' && b[i + 1] == '+' && b[i + 2] == '+' && b[i + 3] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    for (i = 0; i < 4; i++)
    {
        if (c[i] == 'X' && c[i + 1] == 'X' && c[i + 2] == 'X' && c[i + 3] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (c[i] == '+' && c[i + 1] == '+' && c[i + 2] == '+' && c[i + 3] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    for (i = 0; i < 4; i++)
    {
        if (d[i] == 'X' && d[i + 1] == 'X' && d[i + 2] == 'X' && d[i + 3] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (d[i] == '+' && d[i + 1] == '+' && d[i + 2] == '+' && d[i + 3] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    for (i = 0; i < 4; i++)
    {
        if (e[i] == 'X' && e[i + 1] == 'X' && e[i + 2] == 'X' && e[i + 3] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (e[i] == '+' && e[i + 1] == '+' && e[i + 2] == '+' && e[i + 3] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    for (i = 0; i < 4; i++)
    {
        if (f[i] == 'X' && f[i + 1] == 'X' && f[i + 2] == 'X' && f[i + 3] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (f[i] == '+' && f[i + 1] == '+' && f[i + 2] == '+' && f[i + 3] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    //check vertical-----------------------------------------------------------------------------------------------------------------------------------
    for (i = 0; i < 8; i++)
    {
        if (a[i] == 'X' && b[i] == 'X' && c[i] == 'X' && d[i] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (a[i] == '+' && b[i] == '+' && c[i] == '+' && d[i] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    for (i = 0; i < 8; i++)
    {
        if (e[i] == 'X' && b[i] == 'X' && c[i] == 'X' && d[i] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (e[i] == '+' && b[i] == '+' && c[i] == '+' && d[i] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    for (i = 0; i < 8; i++)
    {
        if (e[i] == 'X' && f[i] == 'X' && c[i] == 'X' && d[i] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (e[i] == '+' && f[i] == '+' && c[i] == '+' && d[i] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }


    //check diagonal-------------------------------------------------------------------------------------------------------------------
    for (i = 0; i < 4; i++)
    {
        if (a[i] == 'X' && b[i + 1] == 'X' && c[i + 2] == 'X' && d[i + 3] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (a[i] == '+' && b[i + 1] == '+' && c[i + 2] == '+' && d[i + 3] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    for (i = 0; i < 4; i++)
    {
        if (b[i] == 'X' && c[i + 1] == 'X' && d[i + 2] == 'X' && e[i + 3] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (b[i] == '+' && c[i + 1] == '+' && d[i + 2] == '+' && e[i + 3] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    for (i = 0; i < 4; i++)
    {
        if (c[i] == 'X' && d[i + 1] == 'X' && e[i + 2] == 'X' && f[i + 3] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (c[i] == '+' && d[i + 1] == '+' && e[i + 2] == '+' && f[i + 3] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    //check diagonal 2------------------------------------------------------------------------------------------------------------------
    for (i = 0; i < 4; i++)
    {
        if (d[i] == 'X' && c[i + 1] == 'X' && b[i + 2] == 'X' && a[i + 3] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (d[i] == '+' && c[i + 1] == '+' && b[i + 2] == '+' && a[i + 3] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    for (i = 0; i < 4; i++)
    {
        if (e[i] == 'X' && d[i + 1] == 'X' && c[i + 2] == 'X' && b[i + 3] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (e[i] == '+' && d[i + 1] == '+' && c[i + 2] == '+' && b[i + 3] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    for (i = 0; i < 4; i++)
    {
        if (f[i] == 'X' && e[i + 1] == 'X' && d[i + 2] == 'X' && c[i + 3] == 'X')
        {
            printf("X wins");
            return 0;
        }

        else if (f[i] == '+' && e[i + 1] == '+' && d[i + 2] == '+' && c[i + 3] == '+')
        {
            printf("+ wins");
            return 0;
        }
    }

    return 1;//no win yet
}

int main()
{
    char num[7] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 };
    char a[7] = { 'O' , 'O' , 'O' , 'O' , 'O' , 'O' , 'O' };
    char b[7] = { 'O' , 'O' , 'O' , 'O' , 'O' , 'O' , 'O' };
    char c[7] = { 'O' , 'O' , 'O' , 'O' , 'O' , 'O' , 'O' };
    char d[7] = { 'O' , 'O' , 'O' , 'O' , 'O' , 'O' , 'O' };
    char e[7] = { 'O' , 'O' , 'O' , 'O' , 'O' , 'O' , 'O' };
    char f[7] = { 'O' , 'O' , 'O' , 'O' , 'O' , 'O' , 'O' };
    int choice;
    char putchipchar;
    int xOrPlus = 0;
    char xOrPluschar;

    while (1)
    {
        if (xOrPlus % 2 == 0)
            xOrPluschar = 'X';

        else
            xOrPluschar = '+';

        xOrPlus++;

        printboard(num, a, b, c, d, e, f);

        printf("Enter a number (0 to 7) to put your chip %c in:", xOrPluschar);
        std::cin >> choice;
        //scanf("%d", &choice);

        while (choice > 7 || choice < 0)
        {
            printf("wrong number! Enter a number (0 to 7) to put your chip %c in:", xOrPluschar);
            std::cin >> choice;
            //scanf("%d", &choice);
        }

        putchipchar = putchip(choice, a, b, c, d, e, f);

        switch (putchipchar)
        {
        case 'a':
            a[choice - 1] = xOrPluschar;
            break;

        case 'b':
            b[choice - 1] = xOrPluschar;
            break;

        case 'c':
            c[choice - 1] = xOrPluschar;
            break;

        case 'd':
            d[choice - 1] = xOrPluschar;
            break;

        case 'e':
            e[choice - 1] = xOrPluschar;
            break;

        case 'f':
            f[choice - 1] = xOrPluschar;
            break;

        case 'z':
            printf("column is full");
            xOrPlus--;
            break;
        }

        choice = checkboard(a, b, c, d, e, f);

        if (choice == 0)
        {
            printboard(num, a, b, c, d, e, f);
            break;
        }

    }
    return 0;
}