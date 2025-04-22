#include<stdio.h>
#include<Windows.h>

void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}



int main() {
    gotoxy(7,10);

    // 빨간색 텍스트

    printf("\033[37\m*****\033[0m\n");
   printf("     \033[37\m********\033[0m\n");
   printf("    \033[37\m**********\033[0m\n");
   printf("   \033[37\m************\033[0m\n");
   printf("  \033[37\m**************\033[0m\n");
   printf(" \033[37\m****************\033[0m\n");
   printf("  \033[37\m**************\033[0m\n");
   printf("   \033[37\m************\033[0m\n");
   printf(" \033[33\m****************\033[0m\n");
   printf(" \033[33\m****************\033[0m\n");
   printf(" \033[33\m****************\033[0m\n");
   printf(" \033[33\m****************\033[0m\n");
   printf(" \033[33\m****************\033[0m\n");
   printf(" \033[33\m****************\033[0m\n");

  
 

    return 0;

}
int main()
{gotoxy }