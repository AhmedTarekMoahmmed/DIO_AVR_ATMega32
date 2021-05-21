/*
 * main.c
 *
 *  Created on: Mar 14, 2019
 *      Author: Ahmed Tarek
 */


#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include <util/delay.h>

#include "DIO_interface.h"


#include "STEPPER_interface.h"
#include "STEPPER_config.h"
#include "STEPPER_private.h"

void main()
{	f32 Copy_f32Time =2;
	DIO_voidIntialize();


	Stepper_u8SetStepsNo(256,512,CLOCKWISE);
	//Stepper_u8SetRotationsNo(1,1024,CLOCKWISE);

	//Stepper_u8SetAngle(STEPPER_U32_ANGLE_180,1024,CLOCKWISE);


}

