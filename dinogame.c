#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define SCREEN_WIDTH 50
#define SCREEN_HEIGHT 20
#define GROUND_LEVEL (SCREEN_HEIGHT - 3)

int dinoPosY = GROUND_LEVEL;
int obstaclePosX = SCREEN_WIDTH - 1;
int isJumping = 0;
int jumpHeight = 6;
int velocityY = 0;

void gotoxy(int x, int y) {
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void hideCursor() {
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 100;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void drawDino() {
    gotoxy(5, dinoPosY);
    printf("D");
}

void drawObstacle() {
    gotoxy(obstaclePosX, GROUND_LEVEL);
    printf("|");
}

void clearScreen() {
    system("cls");
}

void updateDino() {
    if (isJumping) {
        dinoPosY -= velocityY;
        velocityY--;
        if (dinoPosY >= GROUND_LEVEL) {
            dinoPosY = GROUND_LEVEL;
            isJumping = 0;
            velocityY = 0;
        }
    }
}

void updateObstacle() {
    obstaclePosX--;
    if (obstaclePosX < 0) {
        obstaclePosX = SCREEN_WIDTH - 1;
    }
}

int checkCollision() {
    if (dinoPosY == GROUND_LEVEL && obstaclePosX == 5) {
        return 1;
    }
    return 0;
}

void renderGround() {
    for (int i = 0; i < SCREEN_WIDTH; i++) {
        gotoxy(i, GROUND_LEVEL + 1);
        printf("-");
    }
}

int main() {
    char input;
    hideCursor();
    while (1) {
        clearScreen();
        
        if (_kbhit()) {
            input = _getch();
            if (input == ' ' && dinoPosY == GROUND_LEVEL) {
                isJumping = 1;
                velocityY = jumpHeight;
            }
        }

        updateDino();
        updateObstacle();

        drawDino();
        drawObstacle();
        renderGround();

        if (checkCollision()) {
            gotoxy(SCREEN_WIDTH / 2 - 5, SCREEN_HEIGHT / 2);
            printf("GAME OVER");
            break;
        }

        Sleep(50);
    }
    return 0;
}
