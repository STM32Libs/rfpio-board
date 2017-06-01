
#ifndef __RFPWM__
#define __RFPWM__

#include "mbed.h"

class rfpwm
{
    public:
        rfpwm();
        void write(int all_pwm);
        void set(int pio_id);
        void clear(int pio_id);
    public:
        static const int nb_pwm = 12;
        static const int nb_io     = 0;
    public:
        PwmOut pwm_m11;
        PwmOut pwm_m12;
        PwmOut pwm_m13;
        PwmOut pwm_m14;
        PwmOut pwm_m21;
        PwmOut pwm_m22;//--------------
        PwmOut pwm_m23;
        PwmOut pwm_m24;

        PwmOut pwm_m31;
        PwmOut pwm_m32;
        PwmOut pwm_m34;
        PwmOut pwm_m33;

        PwmOut   *pwm[nb_pwm];
};

#endif /*__RFPWM__*/
