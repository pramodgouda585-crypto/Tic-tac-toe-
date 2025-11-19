/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

********************************************************************
#include <stdio.h>

int main()
{
    char ttt[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char move='X';
    int x;
    for(int i=1;i<=9;i++){
        printf("Enter Your Move:");
        scanf("%d",&x);
        ttt[x]=move;
        
        printf("\n%c | %c | %c\n",ttt[0],ttt[1],ttt[2]);
        printf("- + - + -\n");
        printf("%c | %c | %c\n",ttt[3],ttt[4],ttt[5]);
        printf("- + - + -\n");
        printf("%c | %c | %c\n",ttt[6],ttt[7],ttt[8]);
        if((ttt[0]=='X' && ttt[1]=='X' && ttt[2]=='X') || (ttt[3]=='X' && ttt[4]=='X' && ttt[5]=='X') || (ttt[6]=='X' && ttt[7]=='X' && ttt[8]=='X') || (ttt[0]=='X' && ttt[4]=='X' && ttt[8]=='X') || (ttt[2]=='X' && ttt[4]=='X' && ttt[6]=='X') || (ttt[0]=='X' && ttt[3]=='X' && ttt[6]=='X') || (ttt[1]=='X' && ttt[4]=='X' && ttt[7]=='X') || (ttt[2]=='X' && ttt[5]=='X' && ttt[8]=='X')){
            printf("X is won");
            break;
        }else if((ttt[0]=='O' && ttt[1]=='O' && ttt[2]=='O') || (ttt[3]=='O' && ttt[4]=='O' && ttt[5]=='O') || (ttt[6]=='O' && ttt[7]=='O' && ttt[8]=='O') || (ttt[0]=='O' && ttt[4]=='O' && ttt[8]=='O') || (ttt[2]=='O' && ttt[4]=='O' && ttt[6]=='O') || (ttt[0]=='O' && ttt[3]=='O' && ttt[6]=='O') || (ttt[1]=='O' && ttt[4]=='O' && ttt[7]=='O') || (ttt[2]=='O' && ttt[5]=='O' && ttt[8]=='O')){
            printf("O is won");
            break;
        }
        if(move=='X'){
            move='O';
        }else{
            move='X';
        }
        if(i==9){
            printf("X and O got tie");
        }
    }
    printf("\nGame over");

    return 0;
}