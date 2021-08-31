#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
char a[3][3] = {'1','2','3','4','5','6','7','8','9'};
int Board(int x,int n)
{   int i,j,k=0;
    char restart;
    if(n==1)
    {
        switch(x)
        {
            case 1:
                a[0][0] = 'O';
                break;
            case 2:
                a[0][1] = 'O';
                break;
            case 3:
                a[0][2] = 'O';
                break;
            case 4:
                a[1][0] = 'O';
                break;
            case 5:
                a[1][1] = 'O';
                break;
            case 6:
                a[1][2] = 'O';
                break;
            case 7:
                a[2][0] = 'O';
                break;
            case 8:
                a[2][1] = 'O';
                break;
            case 9:
                a[2][2] = 'O';
                break;
            case 0:
                printf("Lets start the game!");
        }
    }
    else
    {
         switch(x)
        {
            case 1:
                a[0][0] = 'X';
                break;
            case 2:
                a[0][1] = 'X';
                break;
            case 3:
                a[0][2] = 'X';
                break;
            case 4:
                a[1][0] = 'X';
                break;
            case 5:
                a[1][1] = 'X';
                break;
            case 6:
                a[1][2] = 'X';
                break;
            case 7:
                a[2][0] = 'X';
                break;
            case 8:
                a[2][1] = 'X';
                break;
            case 9:
                a[2][2] = 'X';
                break;
        }
    }
    printf("\n     ___________\n    |   |   |   |\n    |_%c_|_%c_|_%c_|\n    |   |   |   |\n    |_%c_|_%c_|_%c_|\n    |   |   |   |\n    |_%c_|_%c_|_%c_|",a[0][0],a[0][1],a[0][2],a[1][0],a[1][1],a[1][2],a[2][0],a[2][1],a[2][2]);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0 || i==1 || i==2)
            {
                if((a[0][0]==a[0][1] && a[0][1]==a[0][2])||(a[1][0]==a[1][1] && a[1][1]==a[1][2]) || (a[2][0]==a[2][1] && a[2][1]==a[2][2]))
                {
                    if(a[i][j]=='X')
                    {
                        printf("\nPlayer 2 won87");
                        k++;
                        goto end;
                    }
                    else
                    {
                        printf("\nPlayer 1 won93");
                        k++;
                        goto end;
                    }
                }
            }
            if(j==0 || j==1 || j==2)
            {
                if((a[0][0]==a[1][0] && a[1][0]==a[2][0]) || (a[0][1]==a[1][1] && a[1][1]==a[2][1]) || (a[0][2]==a[1][2] && a[1][2]==a[2][2]))
                {
                    if(a[i][j]=='X')
                    {
                        printf("\nPlayer 2 won105");
                        k++;
                        goto end;
                    }
                    else
                    {
                        printf("\nPlayer 1 Won111");
                        k++;
                        goto end;
                    }
                }
            }
            if(i==j)
            {
                if(a[i][j]==a[i+1][j+1] && a[i+1][j+1]==a[i+2][j+2])
                {
                    if(a[i][j]=='X')
                    {
                    printf("\nPlayer 2 Won123");
                    k++;
                    goto end;
                    }
                    else
                    {
                        printf("\nPlayer 1 Won129");
                        k++;
                        goto end;
                    }
                }
            }
            if(i==0 && j==2)
            {
                if(a[i][j]==a[i+1][j-1] && a[i+1][j-1]==a[i+2][j-2])
                {
                    if(a[i][j]=='X')
                    {
                        printf("\nPlayer 2 Won139");
                        k++;
                        goto end;
                    }
                    else
                    {
                        printf("\nPlayer 1 Won145");
                        k++;
                        goto end;
                    }
                }
            }
        }
    }
    end:
        if(k==1)
        {
            printf("\nThank YOU For Playing the game!");
            printf("\nWant to restart? Y/N\n");
            scanf("%c",&restart);
            return 1;
        }
}
int main()
{
    int x,o,player1,player2,i=0,P1=1,P2=2,result;
    char n;
    printf("-----------------------------WELCOME TO TIC TAC TOE--------------------------------\n\n");
    printf("\n>Player1(O)");
    printf("\n>Player2(X)\n");
    printf("\n\nARE YOU READY (press any key)\n");
    scanf("%c",&n);
    system("clear");
    Board(0,1);
    while(i<9)
    {   
        printf("\nPlayer1,Type the position of the O mark\n");
        scanf("%d",&o);
        result = Board(o,P1);
        if(result==1)
        {
            break;
        }
        i++;
        if(i==100)
        {
            goto last;
        }
        printf("\nPlayer2,Type The position of the X mark\n");
        scanf("%d",&x);
        result = Board(x,P2);
        if(result==1)
        {
            break;
        }
        i++;
    }
    last:
    if(i==9)
        printf("\nMatch draw121");
    return 0;
}
