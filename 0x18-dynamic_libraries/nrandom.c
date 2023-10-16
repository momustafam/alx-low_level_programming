#include <stdio.h>
#include <stdlib.h>

// Define the same function signature as gm's main function
int main(int argc, char* argv[]) {
    // Print a message indicating you want to win
    printf("--> Please make me win!\n");

    // Call the original gm program using the provided arguments
    return system("./gm 1 2 3 4 5 6");
}
