//
//  model.h
//  
//
//  Created by Ulises Magaña on 10/08/20
//

#ifndef model_h
#define model_h

/*
* System headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

#include <stdio.h>
#include <math.h>

/*
* Application specific headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

/* Constants declarations. */
#define MAX 200

/* Set EXTERN macro: */

#ifndef model_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

/* Types declarations. */


/* Global variables declarations. */


/* Function prototypes. */

/*
 *
 * The function calculate_mean() receives a data array
 * and returns the mean value.
 * @params
 *      
            
        
 * @returns
        
*/

EXTERN float calculate_mean(float *array, int data_number);


/*
 *
 * The function calculate_median()
 *
 * @params
 *      
            
        
 * @returns
        
*/

EXTERN float calculate_median(float *array, int data_number);


/*
 *
 * The function calculate_mode()
 *
 * @params
 *      
            
        
 * @returns
        
*/

EXTERN float calculate_mode(float *array, int data_number);


/*
 *
 * The function calculate_standard_deviation()
 *
 * @params
 *      
            
        
 * @returns
        
*/

EXTERN float calculate_standard_deviation(float *array, int data_number, float mean);


/*
 *
 * The function calculate_range()
 *
 * @params
 *      
            
        
 * @returns
        
*/

EXTERN float calculate_range(float *array, int data_number);

/*
 *
 * The function calculate_i_distance()
 *
 * @params
 *      
            
        
 * @returns
        
*/

EXTERN float calculate_i_distance(float *array, int data_number);


/*
 * Instanciates a new file pointer identified via its name and mode.
 * @param
 *  name (char *):
 *      Name of the file
 *  mode (char *):
 *      Mode of file to be opened {r, rb, a, ab, w, wb}
 *
 * @return FILE * opened_file.
*/

EXTERN FILE * new_file(char *name, char *mode);


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

EXTERN void generate_plot(char *name);



#undef model_IMPORT
#undef EXTERN

#endif /* model_h */