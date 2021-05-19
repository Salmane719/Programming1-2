

#include <stdio.h>
int main(void)
{

    /*initializing our variables as Integers for later use */
    int sx, sy, dx, dy, axis, dir;
    int diff_x, diff_y;
    sx = 0;
    sy = 0;
    dx = 2;
    dy = 4;
    /*Tells us which axis we're going in*/
    axis = 2;

    //Tells us what direction we're going in 0 = up, 1 = right, 2 = Left, 3 = Down, all relative to the x axis
    dir = 0;

    diff_x = dx - sx;
    diff_y = dy - sy;

    /*Runs our code until we reach both are Y axis and X axis destination*/
    while (diff_y != 0 || diff_x != 0)
    {
        /*When axis is even we move along the y axis and when it's odd we go along the x axis, this is in order to implement the zig zag*/
        if (axis % 2 == 0)
        {
            if (diff_y < 0)
            {
                /*Updating our variables because if we were to update sy or sx alone it doesn't change diff_x... unfortunate... I know*/
                diff_y++;
                sy--;
                /*One of four different sets of if statements to determine which direction our pacman is facing and how to turn to the next*/
                if (dir == 0)
                {
                    printf("R ");
                    printf("R ");
                    printf("W ");
                    dir = 3;
                }
                if (dir == 1)
                {
                    printf("R ");
                    printf("W ");
                    dir = 3;
                }
                if (dir == 2)
                {
                    printf("L ");
                    printf("W ");
                    dir = 3;
                }
                if (dir == 3)
                {
                    printf("W ");
                }
            }
            if (diff_y > 0)
            {
                diff_y--;
                sy++;
                if (dir == 0)
                {
                    printf("W ");
                }
                if (dir == 1)
                {
                    printf("L ");
                    printf("W ");
                    dir = 0;
                }
                if (dir == 2)
                {
                    printf("R ");
                    printf("W ");
                    dir = 0;
                }
                if (dir == 3)
                {
                    printf("R ");
                    printf("R ");
                    printf("W ");
                    dir = 0;
                }
            }
            axis++;
        }
        if (axis % 2 == 1)
        {
            if (diff_x < 0)
            {
                diff_x++;
                sx--;
                if (dir == 0)
                {
                    printf("L ");
                    printf("W ");
                    dir = 2;
                }
                if (dir == 1)
                {
                    printf("L ");
                    printf("L ");
                    printf("W ");
                    dir = 2;
                }
                if (dir == 2)
                {
                    printf("W ");
                }
                if (dir == 3)
                {
                    printf("R ");
                    printf("W ");
                    dir = 2;
                }
            }
            if (diff_x > 0)
            {
                diff_x--;
                sx++;
                if (dir == 0)
                {
                    printf("R ");
                    printf("W ");
                    dir = 1;
                }
                if (dir == 1)
                {
                    printf("W ");
                }
                if (dir == 2)
                {
                    printf("R ");
                    printf("R ");
                    printf("W ");
                    dir = 1;
                }
                if (dir == 3)
                {
                    printf("L");
                    printf("W ");
                    dir = 1;
                }
            }
            axis++;
        }
    }
    /*Just for debugging to make sure our code is running proply
    printf("%d ", diff_x);
    printf("%d ", diff_y);
    printf("sx = %d ", sx);
    printf("sy = %d ", sy);
    printf("%d", axis); */
    return 0;
}