
#include "rfservos.h"


rfservos::rfservos():
            ser_m11(PA_8),
            ser_m12(PA_9),
            ser_m13(PA_10),
            ser_m14(PA_11),
            
            ser_m21(PA_15),
            ser_m22(PB_3),//-----------------
            ser_m23(PA_2),
            ser_m24(PA_3),

            ser_m31(PB_4),
            ser_m32(PB_5),
            ser_m34(PB_1),
            ser_m33(PB_0)
{
    pserv[0] = &ser_m11;
    pserv[1] = &ser_m12;
    pserv[2] = &ser_m13;
    pserv[3] = &ser_m14;
    pserv[4] = &ser_m21;
    pserv[5] = &ser_m22;//-----------------------
    pserv[6] = &ser_m31;
    pserv[7] = &ser_m32;
    pserv[8] = &ser_m34;
    pserv[9] = &ser_m33;
    pserv[10] = &ser_m23;
    pserv[11] = &ser_m24;
}

void rfservos::write(int all_servos)
{
    //ser->printf("write : 0x%04x : ",all_pios);
    for(int i=0;i<nb_servos;i++)
    {
        uint8_t val = (all_servos & 0x0001);
        *pserv[i] = val;
        all_servos>>=1;
    }
}

void rfservos::set(int pio_id)
{

}

void rfservos::clear(int pio_id)
{

}
