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
    float array[50];
    int data_number = 0, index = 0;
    float mean, median, mode, data_value;
    FILE *record = NULL;

    system("clear");
    puts("\t\t\tSTATISTIC DESCRIPTIVE SOFTWARE\n");

    record = new_file("data.csv", "r");
    for(index = 0; index < 50; index++) {
        fscanf(record, "%d %c %f", &data_number, &c, &data_value);
        array[index] = data_value;
        printf("Value %d: %.3f\n", index, array[index]);
    }
    fclose(record);

    mean = calculate_mean(array, data_number);
    printf("\nMean: %.3f\n", mean);

    median = calculate_median(array, data_number);
    printf("Median: %.3f\n", median);

    mode = calculate_mode(array, data_number);
    printf("Mode: %.3f\n", mode);

    return 0;
}