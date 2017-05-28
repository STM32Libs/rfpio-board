
#ifndef __RFPIO__
#define __RFPIO__

#include "mbed.h"
#include "Servo.h"

class rfpio
{
    public:
        rfpio(Serial *v_ser);
        void write(int all_pios);
        void set(int pio_id);
        void clear(int pio_id);
    public:
        static const int nb_io     = 24;
    public:
        Serial *ser;
        DigitalOut pio_c13;
        DigitalOut pio_c14;
        DigitalOut pio_c15;
        DigitalOut pio_a0;
        DigitalOut pio_a1;
        DigitalOut pio_a2;
        DigitalOut pio_a3;
        DigitalOut pio_a6;

        DigitalOut pio_a7;
        DigitalOut pio_b0;
        DigitalOut pio_b1;
        DigitalOut pio_b9;
        DigitalOut pio_b8;
        DigitalOut pio_b7;
        DigitalOut pio_b6;
        DigitalOut pio_b5;

        DigitalOut pio_b4;
        DigitalOut pio_b3;
        DigitalOut pio_a15;
        DigitalOut pio_a12;
        DigitalOut pio_a11;
        DigitalOut pio_a10;
        DigitalOut pio_a9;
        DigitalOut pio_a8;

        DigitalOut *pios[nb_io];
};

#endif /*__RFPIO__*/
