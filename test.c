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
    printf("\37         '             '       (����)    '\n ");
    printf("\37'       '                               (���)   '     \n");
    printf("\37'       '                               (���)   '      \n");
    printf("\37'       '                               (���(      /\     \n");
    printf("\37'       '                               )��)   '  / |   /|   \n");
    printf("\37'       '                               |��|   ' /  |  / |   \n");
    printf("\37'       '         ----------------------|��|--  /|/|/|/  |     \n");
    printf("\37'       '        /|\033[31m����������������������\033[37m|��|\033[31m��\033[37m| /     |/|/|\  \n");
    printf("\37'       '       /\033[33m��|\033[33m����������������������\033[37m|��|\033[31m��\033[37m| /     |/|/|\  \n");
    
    
        return 0;
}

