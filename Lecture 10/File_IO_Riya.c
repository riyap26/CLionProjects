/* Created by Riya Patel on 7/13/20. */

#include <stdio.h>
#include <math.h>

int main() {
    int x, i;
    float sum = 0;
    float mean;
    float sd = 0;

    FILE *input;
    FILE *output;

    input = fopen("Riya_Input.txt", "r");
    fscanf(input, "%d", &x);
    /* will create an array of floats of size x */
    float n[x];

    /* scans each value of the array in the input file */
    for (i = 0; i<x; i++){
        fscanf(input, "%f", &n[i]);
    }

    /* adding the sum of the floats, then using this to calculate mean */
    for (i=0; i<x; i++){
        sum += n[i];
    }
    mean = sum/ (float) x;

    /* printing the mean in the output file */
    output = fopen("Riya_Output.txt", "w");
    fprintf(output, "The mean is %f.", mean);

    /* calculating the numerator for the standard deviation equation */
    for (i=0; i<x; i++){
        sd += pow((n[i]-mean), 2);
    }

    /* calculating the standard deviation and printing it in output file */
    float end_sd = sqrt(sd/ (float) (x-1));
    fprintf(output, "\nThe standard deviation is %f.", end_sd);

    fclose(input);
    fclose(output);

    return 0;
}
