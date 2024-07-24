/*
 * DIO_Interface.h
 *
 * Created: 10/24/2023 9:19:04 PM
 *  Author: karim
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "DIO_Configuration.h"

// Functions for pins
void DIO_SetPinDirection(port Port, pin Pin, state State);
void DIO_SetPinValue(port Port, pin Pin, status Status);
void DIO_TogglePinValue(port Port, pin Pin);
uint8_t DIO_ReadPinValue(port Port, pin Pin);
void DIO_SetPinPullUp(port Port, pin Pin);
// Functions for ports
void DIO_SetPortDirection(port Port, state State);
void DIO_SetPortValue(port Port, status Status);
void DIO_TogglePortValue(port Port);
uint8_t DIO_ReadPortValue(port Port);
void DIO_SetPortPullUp(port Port);



#endif /* DIO_INTERFACE_H_ */