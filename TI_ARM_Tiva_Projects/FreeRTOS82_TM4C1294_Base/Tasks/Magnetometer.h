/*
 * Magnetometer.h
 *
 *  Created on: Sep 22, 2016
 *      Author: Alex Kimani, Rusty Riedel
 */

#ifndef TASKS_MAGNETOMETER_H_
#define TASKS_MAGNETOMETER_H_


//funcion prototypes
extern void Init_Magnetometer();
extern void Task_Magnetometer( void *pvParameters );
extern void Magnetometer_ISR_Handler();


#endif /* TASKS_MAGNETOMETER_H_ */
