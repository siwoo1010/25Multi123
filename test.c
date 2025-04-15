#include <Windows.h>
#include <stdio.h>

void gotoXY(int x, int y)
{
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int main() {
    gotoXY(10, 10);
    printf("\37         '             '       (¡á¡á¡á)    '\n ");
    printf("\37'       '                               (¡á¡á)   '     \n");
    printf("\37'       '                               (¡á¡á)   '      \n");
    printf("\37'       '                               (¡á¡á(      /\     \n");
    printf("\37'       '                               )¡á)   '  / |   /|   \n");
    printf("\37'       '                               |¡á|   ' /  |  / |   \n");
    printf("\37'       '         ----------------------|¡á|--  /|/|/|/  |     \n");
    printf("\37'       '        /|\033[31m¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á\033[37m|¡á|\033[31m¡á\033[37m| /     |/|/|\  \n");
    printf("\37'       '       /\033[33m¡á|\033[33m¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á\033[37m|¡á|\033[31m¡á\033[37m| /     |/|/|\  \n");
    
    
        return 0;
}

