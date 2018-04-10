#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W; // width of the building.
    int H; // height of the building.
    scanf("%d%d", &W, &H);
    int N; // maximum number of turns before game over.
    scanf("%d", &N);
    int X0;
    int Y0;
    scanf("%d%d", &X0, &Y0);
    //H = H-1;
    //W = W-1;
    int X = 0;
    int Y = 0;
    int minX = 0;
    int maxX = W;
    int minY = 0;
    int maxY = H;
    
    // game loop
    while (1) {
        char bombDir[4]; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        scanf("%s", bombDir);
        
    
        switch(bombDir[0]) { 
            case 'U':
                maxY = Y0; 
                Y0 = Y0 - ceil(((double)maxY - minY)/2);
            break;
            
            case 'R':
                minX = X0; 
                X0 = X0 + ceil(((double)maxX - minX)/2);
            break;
            
            case 'D':
                minY = Y0; 
                Y0 = Y0 + ceil(((double)maxY - minY)/2);                
            break;
            
            case 'L':
                maxX = X0; 
                X0 = X0 - ceil(((double)maxX - minX)/2);                
            break;
            
            default:
                fprintf(stderr, "AAAAAAAAAAAAAAAAAAAAA \n");
        }   
        
        switch(bombDir[1]) { 
            case 'U':
                maxY = Y0; 
                Y0 = Y0 - ceil(((double)maxY - minY)/2);
            break;
            
            case 'R':
                minX = X0; 
                X0 = X0 + ceil(((double)maxX - minX)/2);
            break;
            
            case 'D':
                minY = Y0; 
                Y0 = Y0 + ceil(((double)maxY - minY)/2);                
            break;
            
            case 'L':
                maxX = X0; 
                X0 = X0 - ceil(((double)maxX - minX)/2);                
            break;
            
            default:
                fprintf(stderr, "AAAAAAAAAAAAAAAAAAAAA \n");
        }   

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        fprintf(stderr, "Debug messages...%c\n", bombDir[1]);
        fprintf(stderr, "Debug messages...%d\n", H);
        printf("%d %d\n", X0, Y0);


        // the location of the next window Batman should jump to.
        //printf("0 0\n");
    }

    return 0;
}