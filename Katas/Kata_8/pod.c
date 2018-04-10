#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{

    // game loop
    while (1) {
        int x;
        int y;
        int nextCheckpointX; // x position of the next check point
        int nextCheckpointY; // y position of the next check point
        int nextCheckpointDist; // distance to the next checkpoint
        int nextCheckpointAngle; // angle between your pod orientation and the direction of the next checkpoint
        scanf("%d%d%d%d%d%d", &x, &y, &nextCheckpointX, &nextCheckpointY, &nextCheckpointDist, &nextCheckpointAngle);
        int opponentX;
        int opponentY;
        int thrust;
        scanf("%d%d", &opponentX, &opponentY);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        if (nextCheckpointAngle > 75 || nextCheckpointAngle < -75){
            thrust = 0;
        } else if (nextCheckpointDist < 1000) {
            thrust = 10;
        } else {
            thrust = 100;
        }

        if (nextCheckpointAngle == 0 && nextCheckpointDist > 8000){
            printf("%d %d BOOST\n", nextCheckpointX, nextCheckpointY);
        } else {
            printf("%d %d %d\n", nextCheckpointX, nextCheckpointY, thrust);

        }


        fprintf(stderr, "dist...%d\n", nextCheckpointDist);
        fprintf(stderr, "dist...%d\n", nextCheckpointAngle);


        //printf("%d %d %d\n", nextCheckpointX, nextCheckpointY, thrust);

        // You have to output the target position
        // followed by the power (0 <= thrust <= 100)
        // i.e.: "x y thrust"
    }

    return 0;
}
