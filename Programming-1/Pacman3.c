
#include <stdio.h>
/*Initializes a function to find the numbers of steps needed to go*/
void Go(int steps);

int main(void)
{
    int sx, sy, dx, dy;
    int diff_x, diff_y;
    /* Iinitialising the variables as an integer */

    sx = 1;
    sy = 1;
    dx = 23;
    dy = -8;
    /*Assigning Values*/

    diff_x = dx - sx;
    /*Horizontal Distance between pacman and his target*/
    diff_y = dy - sy;
    /*Vertical distance between pacman and his target*/
    int dir = 0;
    /*Tells us what direction: 0 Up, 1 left, 2 down, 3 right*/
    while (dy != sy)
    {
        if (diff_y < 0)
        {
            printf("Left ");
            printf("Left ");
            Go(-diff_y);
            dir += 2;
            sy += diff_y;
        }
        if (diff_y > 0)
        {
            Go(diff_y);
            sy += diff_y;
        }
    }
    while (dx != sx)
    {
        if (diff_x < 0)
        {
            if (dir == 0)
            {
                printf("Left ");
                Go(-diff_x);
                sx += diff_x;
            }
            if (dir == 2)
            {
                printf("Right");
                Go(-diff_x);
                sx += diff_x;
            }
        }
        if (diff_x > 0)
        {
            if (dir == 0)
            {
                printf("Right ");
                Go(diff_x);
                sx += diff_x;
            }
            if (dir == 2)
            {
                printf("Left ");
                Go(diff_x);
                sx += diff_x;
            }
        }
    }
    printf("\n");
    return 0;
}
/*Gets the number of steps */
void Go(int steps)
{
    int i;
    for (i = 0; i < steps; i++)
    {
        printf("w ");
    }
}