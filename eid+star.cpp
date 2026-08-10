#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int starX = 100, starY = 100;
    int dx = 3;

    while (!kbhit()) {
        cleardevice();
        setbkcolor(BLACK);
        cleardevice();

        // Crescent ??
        setcolor(WHITE);
        setfillstyle(SOLID_FILL, WHITE);
        fillellipse(300, 200, 80, 80);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL, BLACK);
        fillellipse(330, 200, 70, 70);

        // Moving Star ?
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        fillellipse(starX, starY, 20, 20);

        starX += dx;
        if (starX > getmaxx() - 20 || starX < 20) dx = -dx;

        delay(60);
    }

    getch();
    closegraph();
    return 0;
}
