#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persist", "w");
    
    if (gnuplotPipe == NULL) {
        fprintf(stderr, "Error opening Gnuplot.\n");
        return 1;
    }
    
    // Send Gnuplot commands to create a simple plot
    fprintf(gnuplotPipe, "plot sin(x)\n");
    
    // Close the Gnuplot process
    pclose(gnuplotPipe);
    
    return 0;
}
