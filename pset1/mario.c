/**
 * Author Pablo Alonso
 * When testing the results, it gives two errors. 
 * But the same errors are given with the solution provided by CS50.
 * 
 * 
 * 
 * 
 * 
*/

#include <cs50.h>
#include <stdio.h>

void PrintSpaces(int height, int blocks){
    for (int i = height - blocks; i > 0; i--){
        printf(" ");
    }
}

void PrintHash(int blocks){
    for (int i = 1; i <= blocks; i++){
        printf("#");
    }
}

int main(void){
    int height;
    do{
        printf("Height: ");
        height = GetInt();
    } while (height < 0 || height > 23);
    int blocks = 0;
    for(int i = height; i > 0 ;i--){
        blocks++; // number of blocks
        // Left column
        PrintSpaces(height, blocks);
        PrintHash(blocks);
        // Separation
        printf("  ");
        // Right column
        PrintHash(blocks);
        PrintSpaces(height, blocks);
        printf("\n");
    }
    return 0;
}
