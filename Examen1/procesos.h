//
//  template.h
//  
//
//  Created by Juan Carlos Garcia on 08/10/20.
//

#ifndef procesos_h
#define procesos_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef procesos_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

/*
 * @function
 *
 * @params
 *
 * @return
 *
 */
EXTERN float median(float array[]);



/*
 * @function
 *
 * @params
 *
 * @return
 *
 */
EXTERN float mean(float array[]);



/*
 * @function
 *
 * @params
 *
 * @return
 *
 */
EXTERN int mode(float array[]);



/*
 * @function
 *
 * @params
 *
 * @return
 *
 */
EXTERN float stdev(float array[], float mean);


/*
 * @function
 *
 * @params
 *
 * @return
 *
 */
EXTERN float range(float array[]);



/*
 * @function
 *
 * @params
 *
 * @return
 *
 */
EXTERN float IQR(float array[]);




#endif /* procesos_h */
