//
//  test_main.c
//  
//
//  Created by Ulises Magaña on 10/08/20
//

#include <stdio.h>
#include <stdlib.h>


#include "model.h"
#include "view.h"
#include "controller.h"
#include "test_main.h"

int main(void) {
    char c;
    float *array;
    int data_number = 0, index = 0;
    float mean, median, mode, data_value;
    FILE *file = NULL;

    system("clear");
    puts("\t\t\tSTATISTIC DESCRIPTIVE SOFTWARE\n");

    file = new_file("data.csv", "r");
    for(index = 0; index < 50; index++) {
        fscanf(file, "%d %c %f", &data_number, &c, &data_value);
        array[index] = data_value;
        printf("Value %d: %.3f\n", index, array[index]);
    }
    fclose(file);

    file = new_file("data_statistic.csv", "w");

    mean = calculate_mean(array, data_number);
    fprintf(file, "Mean: %.3f\n", mean);
    median = calculate_median(array, data_number);
    fprintf(file, "Median: %.3f\n", median);
    mode = calculate_mode(array, data_number);
    fprintf(file, "Mode: %.3f\n", mode);

    fclose(file);

    return 0;
}