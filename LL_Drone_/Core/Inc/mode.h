/*
 * mode.h
 *
 *  Created on: 2020. 8. 10.
 *      Author: perSec
 */

#ifndef INC_MODE_H_
#define INC_MODE_H_

typedef enum{
	Error=-1,
	Unarmed=0,
	Normal=1,
	GPS_holding=2
}Mode;

Mode Drone_mode;


#endif /* INC_MODE_H_ */
