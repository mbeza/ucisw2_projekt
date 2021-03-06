/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/BPOGODA/Desktop/ucisw2_projekt-master/ucisw2_projekt-master/src/vga_800x600.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_3908131327_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_0419244056_3212880686_p_0(char *t0)
{
    char t13[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;

LAB0:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6160);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 10839);
    t6 = (t0 + 6336);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 11U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t2 = (t0 + 10708U);
    t7 = (t0 + 2768U);
    t8 = *((char **)t7);
    t7 = (t0 + 10612U);
    t9 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t13, t8, t7, 1);
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t6, t2, t9, t13);
    if (t14 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 10708U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t2, t1, 1);
    t6 = (t13 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (11U != t22);
    if (t3 == 1)
        goto LAB13;

LAB14:    t7 = (t0 + 6336);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t5, 11U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 6400);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(68, ng0);
    t10 = (t0 + 10850);
    t16 = (t0 + 6336);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t10, 11U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 6400);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    xsi_size_not_matching(11U, t22, 0);
    goto LAB14;

}

static void work_a_0419244056_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 10708U);
    t4 = (t0 + 2888U);
    t5 = *((char **)t4);
    t4 = (t0 + 10628U);
    t6 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t3, t2, t5, t4);
    if (t6 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t17 = (t0 + 6464);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t17);

LAB2:    t22 = (t0 + 6176);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 6464);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB5:    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t7 = (t0 + 10708U);
    t9 = (t0 + 3008U);
    t10 = *((char **)t9);
    t9 = (t0 + 10644U);
    t11 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t8, t7, t10, t9);
    t1 = t11;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_0419244056_3212880686_p_2(char *t0)
{
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;

LAB0:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t11 = xsi_signal_has_event(t1);
    if (t11 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6192);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 10861);
    t6 = (t0 + 6528);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 11U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2312U);
    t7 = *((char **)t2);
    t2 = (t0 + 10724U);
    t8 = (t0 + 3128U);
    t9 = *((char **)t8);
    t8 = (t0 + 10660U);
    t10 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t16, t9, t8, 1);
    t17 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t2, t10, t16);
    if (t17 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 10724U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t16, t2, t1, 1);
    t6 = (t16 + 12U);
    t25 = *((unsigned int *)t6);
    t26 = (1U * t25);
    t3 = (11U != t26);
    if (t3 == 1)
        goto LAB16;

LAB17:    t7 = (t0 + 6528);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    memcpy(t18, t5, 11U);
    xsi_driver_first_trans_fast(t7);

LAB14:    goto LAB3;

LAB7:    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    t3 = t15;
    goto LAB9;

LAB10:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t4 = t13;
    goto LAB12;

LAB13:    xsi_set_current_line(85, ng0);
    t18 = (t0 + 10872);
    t20 = (t0 + 6528);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t18, 11U);
    xsi_driver_first_trans_fast(t20);
    goto LAB14;

LAB16:    xsi_size_not_matching(11U, t26, 0);
    goto LAB17;

}

static void work_a_0419244056_3212880686_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t2 = (t0 + 10724U);
    t4 = (t0 + 3248U);
    t5 = *((char **)t4);
    t4 = (t0 + 10676U);
    t6 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t3, t2, t5, t4);
    if (t6 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t17 = (t0 + 6592);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t17);

LAB2:    t22 = (t0 + 6208);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 6592);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB5:    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t7 = (t0 + 10724U);
    t9 = (t0 + 3368U);
    t10 = *((char **)t9);
    t9 = (t0 + 10692U);
    t11 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t8, t7, t10, t9);
    t1 = t11;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_0419244056_3212880686_p_4(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t3 = (t0 + 10708U);
    t5 = ieee_p_3620187407_sub_3908131327_3965413181(IEEE_P_3620187407, t4, t3, 0);
    if (t5 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t21 = (t0 + 6656);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t21);

LAB2:    t26 = (t0 + 6224);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 6656);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t16);
    goto LAB2;

LAB5:    t10 = (t0 + 2312U);
    t11 = *((char **)t10);
    t10 = (t0 + 10724U);
    t12 = ieee_p_3620187407_sub_3908131327_3965413181(IEEE_P_3620187407, t11, t10, 0);
    if (t12 == 1)
        goto LAB11;

LAB12:    t9 = (unsigned char)0;

LAB13:    t1 = t9;
    goto LAB7;

LAB8:    t6 = (t0 + 2152U);
    t7 = *((char **)t6);
    t6 = (t0 + 10708U);
    t8 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t7, t6, 800);
    t2 = t8;
    goto LAB10;

LAB11:    t13 = (t0 + 2312U);
    t14 = *((char **)t13);
    t13 = (t0 + 10724U);
    t15 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t14, t13, 600);
    t9 = t15;
    goto LAB13;

LAB15:    goto LAB2;

}

static void work_a_0419244056_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(98, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 6720);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 11U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6240);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0419244056_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(99, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 11U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6256);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0419244056_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0419244056_3212880686_p_0,(void *)work_a_0419244056_3212880686_p_1,(void *)work_a_0419244056_3212880686_p_2,(void *)work_a_0419244056_3212880686_p_3,(void *)work_a_0419244056_3212880686_p_4,(void *)work_a_0419244056_3212880686_p_5,(void *)work_a_0419244056_3212880686_p_6};
	xsi_register_didat("work_a_0419244056_3212880686", "isim/game_controller_test_isim_beh.exe.sim/work/a_0419244056_3212880686.didat");
	xsi_register_executes(pe);
}
