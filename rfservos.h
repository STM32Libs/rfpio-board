
#ifndef __RFSERVOS__
#define __RFSERVOS__

#include "mbed.h"
#include "Servo.h"

class rfservos
{
    public:
        rfservos();
        void write(int all_servos);
        void set(int pio_id);
        void clear(int pio_id);
    public:
        static const int nb_servos = 12;
        static const int nb_io     = 0;
        static const int nb_pwm    = 0;
    public:
        Servo ser_m11;
        Servo ser_m12;
        Servo ser_m13;
        Servo ser_m14;
        Servo ser_m21;
        Servo ser_m22;//--------------
        Servo ser_m23;
        Servo ser_m24;

        Servo ser_m31;
        Servo ser_m32;
        Servo ser_m34;
        Servo ser_m33;

        Servo   *pserv[nb_servos];
};

#endif /*__RFSERVOS__*/
