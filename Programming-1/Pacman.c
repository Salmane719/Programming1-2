
#include <stdio.h>
/*find the numbers of steps needed to go*/
void Go(int steps);

int main(void)
{
    int sx, sy, dx, dy;
    int diff_x, diff_y;
    /* Iinitialising the variables as an integer */

    sx = 1;
    sy = 1;
    dx = 1;
    dy = 4;
    /*Assigning Values*/

    diff_x = dx - sx;
    /*Horizontal Distance between pacman and his target*/
    diff_y = dy - sy;
    /*Vertical distance between pacman and his target*/

    /*Decides what the distance between two values is and carries out a function accordingly*/
    if (diff_x > 0 && diff_y > 0)
    {
        printf("R ");
        Go(diff_x);
        printf("R ");
        Go(diff_y);
    }
    if (diff_x > 0 && diff_y < 0)
    {
        printf("R ");
        Go(-diff_x);
        printf("L ");
        Go(-diff_y);
    }
    if (diff_x < 0 && diff_y > 0)
    {
        printf("L ");
        Go(-diff_x);
        printf("L ");
        Go(diff_y);
    }
    if (diff_x < 0 && diff_y < 0)
    {
        printf("L ");
        Go(-diff_x);
        printf("R ");
        Go(-diff_y);
    }

    printf("\n");
    return 0;
    printf("%d", sx);
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