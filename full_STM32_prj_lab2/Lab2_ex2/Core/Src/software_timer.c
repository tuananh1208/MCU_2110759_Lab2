/*
 * software_timer.c
 *
 *  Created on: Sep 16, 2023
 *      Author: TuanAnh
 */

#include "software_timer.h"

int timer1_counter  = 0;
int timer1_flag = 0;
int timer2_counter  = 0;
int timer2_flag = 0;
int timer3_counter  = 0;
int timer3_flag = 0;

void setTimer1(int duration) {
	timer1_flag = 0;
	timer1_counter = duration;
}

void setTimer2(int duration) {
	timer2_flag = 0;
	timer2_counter = duration;
}

void setTimer3(int duration) {
	timer3_flag = 0;
	timer3_counter = duration;
}

void timerRun() {
	if (timer1_counter > 0) {
		timer1_counter = timer1_counter - 1;
		if (timer1_counter <= 0) {
			timer1_flag = 1;
		}
	}

	if (timer2_counter > 0) {
		timer2_counter = timer2_counter - 1;
		if (timer2_counter <= 0) {
			timer2_flag = 1;
		}
	}

	if (timer3_counter > 0) {
		timer3_counter = timer3_counter - 1;
		if (timer3_counter <= 0) {
			timer3_flag = 1;
		}
	}
}
