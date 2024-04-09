/*
 * Robot_odom.h
 *
 *  Created on: Mar 31, 2024
 *      Author: Nghia
 */

#ifndef INC_ROBOT_ODOM_H_
#define INC_ROBOT_ODOM_H_

#include "stdlib.h"
#include"stdio.h"
#include"math.h"

#define L 0.18
#define d 0.065
#define R 0.065/2
#define pi 3.1415
#define N 1030
#define PWM_max 400
#define PWM_min 350

#define v_max 0.2
#define v_min 0.12
typedef struct {
    float x;
    float y;
    float phi;

    float v;
    float v_l;
    float v_r;
    float omega;
    char cmd[3];
    float v_l_rpm;
    float v_r_rpm;
    float v_l_PWM;
    float v_r_PWM;

    float S_distance;

}Robot;

void init_Robot(Robot* robot);
void update_Position(Robot* robot, int encoder_difference_left, int encoder_difference_right);
void update_Position_base_velocity(Robot* robot, int encoder_difference_left, int encoder_difference_right,float delta_t);
float get_X(Robot* robot);
float get_Y(Robot* robot);
float get_Phi(Robot* robot);
float get_Vr(Robot* robot);
float get_Vl(Robot* robot);
float get_V(Robot* robot);
float get_Omega(Robot* robot);

void set_X(Robot* robot,float x_New );
void set_Y(Robot* robot,float y_New );
void set_Phi(Robot* robot,float phi_New);
void set_Omega(Robot* robot,float omega_New);
void set_Vr(Robot* robot,float vr_New);
void set_vl(Robot* robot,float vl_New);
void set_Vr_VL(Robot* robot ,float vr_New,float vl_New);
void set_V(Robot* robot ,float v_New);


#endif /* INC_ROBOT_ODOM_H_ */
