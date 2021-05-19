#include <stdio.h>
/*find the numbers of steps needed to go*/
void Go(int steps);

int main(void)
{
    int sx, sy, dx, dy;
    int diff_x, diff_y;
    /* Iinitialising the variables as an integer */

    sx = 4;
    sy = 1;
    dx = 3;
    dy = -2;
    /*Assigning Values*/

    diff_x = dx - sx;
    /*Horizontal Distance between pacman and his target*/
    diff_y = dy - sy;
    /*Vertical distance between pacman and his target*/

    /*Decides what the distance between two values is and carries out a function accordingly*/
    while (dy != sy)
    {
        if(diff_y < 0){
            sy += -1;
            printf("Down ");
        }
        if(diff_y > 0){
            sy += 1;
            printf("UP ");
        }
    }
    while( dx != sx)
    {
        if(diff_x < 0){
            sx += -1;
            printf("Left ");
        }
        if(diff_x > 0){
            sx += 1;
            printf("Right ");
        }
    }
    printf("Arrived at the destination");
    return 0;
}