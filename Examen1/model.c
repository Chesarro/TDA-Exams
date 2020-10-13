//
//  model.c
//  
//
//  Created by Ulises Magaña on 10/08/20
//

#include <stdlib.h>


#define model_IMPORT
#include "model.h"

/*
 *
 * The function calculate_mean() receives a data array
 * and returns the mean value.
 *
 * @params
 *      
            
        
 * @returns
        
*/

float calculate_mean(float *array, int data_number) {
    float total = 0, mean = 0;

    for(int index = 0; index < data_number; index++) {
        total += array[index];
    }

    mean = total/data_number;

    return mean;
}


/*
 *
 * The function calculate_median()
 *
 * @params
 *      
            
        
 * @returns
        
*/

float calculate_median(float *array, int data_number) {
    int temp, index;
    float median = 0;

    if(data_number % 2 == 0) {
        temp = (data_number / 2) - 1;

        for(index = 0; index < data_number; index++) {
            if(temp == index || (temp + 1) == index) {
                median = median + array[index];
            }
        }

        median = median / 2;
        
    }else{
        temp = (data_number / 2);
        for(index = 0; index < data_number; index++) {
            if(temp == index) {
                median = array[index];
            }
        }
    }

    return median;
}


/*
 *
 * The function calculate_mode()
 *
 * @params
 *      
            
        
 * @returns
        
*/

float calculate_mode(float *array, int data_number) {
    int i, j, k, temp, counter = 0, mode = 0;
    int registers[data_number];
    
    for(i = 0; i < data_number; i++) {
        for(j = 0; j < data_number - i; j++) {
            if(array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
	}

    for(i = 0; i < data_number; i++) {
	    for(k = i + 1; k <data_number; k++){
            if(array[i] == array[k]) {
				registers[i]++;
			}
		}
    }
	
    for(i = 1; i <= data_number; i++) {
        if(registers[i] > counter) {
            counter = registers[i];
            mode = array[i];
        }
    }
    
    return mode;
}


/*
 *
 * The function calculate_standard_deviation()
 *
 * @params
 *      
            
        
 * @returns
        
*/

float calculate_standard_deviation(float *array, int data_number, float mean) {
    float standard_deviation = 0, total = 0;

    for(int index = 0; index < data_number; index++) {
        total += array[index];
    }

    standard_deviation = sqrt( (pow(total - mean, 2)) / data_number);

    return standard_deviation;
}


/*
 *
 * The function calculate_range()
 *
 * @params
 *      
            
        
 * @returns
        
*/

float calculate_range(float *array, int data_number) {
    float range = 0, min_value = 0, max_value = 0;
    
    for(int index = 0; index < data_number; index++) {
		if(array[index] > max_value) {
            max_value = array[index];
        }
		else{
			if(array[index] < min_value) {
                min_value = array[index];
            }
		}
	}

    range = max_value - min_value;

    return range;
}


/*
 *
 * The function calculate_i_distance()
 *
 * @params
 *      
            
        
 * @returns
        
*/

float calculate_i_distance(float *array, int data_number) {
    float interquartile_distance = 0;


    return interquartile_distance;
}


/*
 *
 * Instanciates a new file pointer identified via its name and mode.
 * @param
 *  name (char *):
 *      Name of the file
 *  mode (char *):
 *      Mode of file to be opened {r, rb, a, ab, w, wb}
 *
 * @return FILE * opened_file.
*/

FILE * new_file(char *name, char *mode) {
    FILE * my_file = NULL;
    my_file = fopen(name, mode);

    if(my_file == NULL) {
        puts("FILE OPEN ERROR");
        return NULL;
    }
    else
        return my_file;
}


/*
 *
 * The function generate_plot() gives an instruction within GNUPLOT
 * to generate a plot depending on which file is sent to this function. 
 *
 * @params
 *  name (char *):
       Name of the file
     
      
 * @returns
        void   
*/

void generate_plot(char *name) {
    FILE * new_GNUPlot_Window;
    char instruction[MAX];
    sprintf(instruction, "plot \"%s\" w l", name);

    new_GNUPlot_Window = popen("gnuplot -persist", "w");
    fprintf(new_GNUPlot_Window, "%s\n", instruction);
    // pclose(new_GNUPlot_Window);

}
