
#include "rfpio.h"


rfpio::rfpio(Serial *v_ser):
            ser(v_ser),
            pio_c13(PC_13),
            pio_c14(PC_14),
            pio_c15(PC_15),
            pio_a0(PA_0),
            pio_a1(PA_1),
            pio_a2(PA_2),
            pio_a3(PA_3),
            pio_a6(PA_6),
            pio_a7(PA_7),
            pio_b0(PB_0),
            pio_b1(PB_1),
            pio_b9(PB_9),
            pio_b8(PB_8),
            pio_b7(PB_7),
            pio_b6(PB_6),
            pio_b5(PB_5),
            pio_b4(PB_4),
            pio_b3(PB_3),
            pio_a15(PA_15),
            pio_a12(PA_12),
            pio_a11(PA_11),
            pio_a10(PA_10),
            pio_a9(PA_9),
            pio_a8(PA_8)
{
    pios[23] = &pio_c13;
    pios[22] = &pio_c14;
    pios[21] = &pio_c15;
    pios[20] = &pio_a0;
    pios[19] = &pio_a1;
    pios[18] = &pio_a2;
    pios[17] = &pio_a3;
    pios[16] = &pio_a6;
    pios[15] = &pio_a7;
    pios[14] = &pio_b0;
    pios[13] = &pio_b1;
    pios[12] = &pio_b9;
    pios[11] = &pio_b8;
    pios[10] = &pio_b7;
    pios[9] = &pio_b6;
    pios[8] = &pio_b5;
    pios[7] = &pio_b4;
    pios[6] = &pio_b3;
    pios[5] = &pio_a15;
    pios[4] = &pio_a12;
    pios[3] = &pio_a11;
    pios[2] = &pio_a10;
    pios[1] = &pio_a9;
    pios[0] = &pio_a8;
}

void rfpio::write(int all_pios)
{
    //ser->printf("write : 0x%04x : ",all_pios);
    for(int i=0;i<nb_io;i++)
    {
        uint8_t val = (all_pios & 0x0001);
        /*if(val == 1)
        {
            ser->printf("1 ");
        }
        else
        {
            ser->printf("0 ");
        }*/
        *pios[i] = val;
        all_pios>>=1;
    }
    //ser->printf("\n");
}

void rfpio::set(int pio_id)
{
    *pios[pio_id] = 1;
}

void rfpio::clear(int pio_id)
{
    *pios[pio_id] = 0;
}
