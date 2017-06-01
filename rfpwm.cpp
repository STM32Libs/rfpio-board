
#include "rfpwm.h"


rfpwm::rfpwm():
            pwm_m11(PA_8),
            pwm_m12(PA_9),
            pwm_m13(PA_10),
            pwm_m14(PA_11),
            
            pwm_m21(PA_15),
            pwm_m22(PB_3),//-----------------
            pwm_m23(PA_2),
            pwm_m24(PA_3),

            pwm_m31(PB_4),
            pwm_m32(PB_5),
            pwm_m34(PB_1),
            pwm_m33(PB_0)
{
    pwm[0] = &pwm_m11;
    pwm[1] = &pwm_m12;
    pwm[2] = &pwm_m13;
    pwm[3] = &pwm_m14;

    pwm[4] = &pwm_m21;
    pwm[5] = &pwm_m22;//-----------------------
    pwm[10] = &pwm_m23;
    pwm[11] = &pwm_m24;

    pwm[6] = &pwm_m31;
    pwm[7] = &pwm_m32;
    pwm[8] = &pwm_m34;
    pwm[9] = &pwm_m33;

    for(int i=0;i<nb_pwm;i++)
    {
        (*pwm[i]).period_ms(20);
    }
}

void rfpwm::write(int all_pwm)
{
    //ser->printf("write : 0x%04x : ",all_pios);
    for(int i=0;i<nb_pwm;i++)
    {
        uint8_t val = (all_pwm & 0x0001);
        if(val == 1)
        {
            (*pwm[i]).write(1.0/20);
        }
        else
        {
            (*pwm[i]).write(2.0/20);
        }
        all_pwm>>=1;
    }
}

void rfpwm::set(int pio_id)
{

}

void rfpwm::clear(int pio_id)
{

}
