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
static const char *ng0 = "C:/Users/igna_/Documents/Tecnicas Digitales I/trenes/top.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {12U, 0U};
static unsigned int ng8[] = {15U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};



static void Always_33_0(char *t0)
{
    char t14[8];
    char t19[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    int t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 6704);
    *((int *)t2) = 1;
    t3 = (t0 + 4680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 2528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB9:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t13 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB21:
LAB20:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB22:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3568);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB8;

LAB10:    xsi_set_current_line(38, ng0);
    t11 = (t0 + 1888U);
    t12 = *((char **)t11);
    t11 = (t0 + 1728U);
    t15 = *((char **)t11);
    xsi_vlogtype_concat(t14, 2, 2, 2U, t15, 1, t12, 1);

LAB23:    t11 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t14, 2, t11, 2);
    if (t16 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 2, t2, 2);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 2, t2, 2);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 2, t2, 2);
    if (t13 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB34:    goto LAB22;

LAB12:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 2208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1888U);
    t11 = *((char **)t3);
    xsi_vlogtype_concat(t19, 2, 2, 2U, t11, 1, t5, 1);

LAB35:    t3 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t19, 2, t3, 2);
    if (t16 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t13 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t13 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t13 == 1)
        goto LAB42;

LAB43:
LAB45:
LAB44:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB46:    goto LAB22;

LAB14:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 2048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1728U);
    t11 = *((char **)t3);
    xsi_vlogtype_concat(t20, 2, 2, 2U, t11, 1, t5, 1);

LAB47:    t3 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t20, 2, t3, 2);
    if (t16 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 2);
    if (t13 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 2);
    if (t13 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 2);
    if (t13 == 1)
        goto LAB54;

LAB55:
LAB57:
LAB56:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB58:    goto LAB22;

LAB16:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2048U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB61:    goto LAB22;

LAB18:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2208U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB64:    goto LAB22;

LAB24:    xsi_set_current_line(39, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 3568);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 3);
    goto LAB34;

LAB26:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB34;

LAB28:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB34;

LAB30:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB34;

LAB36:    xsi_set_current_line(46, ng0);
    t12 = ((char*)((ng2)));
    t15 = (t0 + 3568);
    xsi_vlogvar_assign_value(t15, t12, 0, 0, 3);
    goto LAB46;

LAB38:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB46;

LAB40:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB46;

LAB42:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB46;

LAB48:    xsi_set_current_line(53, ng0);
    t12 = ((char*)((ng3)));
    t15 = (t0 + 3568);
    xsi_vlogvar_assign_value(t15, t12, 0, 0, 3);
    goto LAB58;

LAB50:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB58;

LAB52:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 3568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB58;

LAB54:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB58;

LAB59:    xsi_set_current_line(59, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3568);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB61;

LAB62:    xsi_set_current_line(61, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3568);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB64;

}

static void Cont_68_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 6864);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 6720);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_69_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 6928);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 6736);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_70_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 6992);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 6752);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_71_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 7056);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 6768);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_72_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7120);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 1, 1);

LAB1:    return;
}

static void Cont_73_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7184);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 1, 1);

LAB1:    return;
}

static void Always_76_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 6784);
    *((int *)t2) = 1;
    t3 = (t0 + 6416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 3568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(78, ng0);
    t9 = ((char*)((ng7)));
    t10 = (t0 + 3728);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB19;

LAB9:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB19;

LAB11:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB19;

LAB13:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB19;

LAB15:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB19;

}


extern void work_m_00000000002164391802_3823007873_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Cont_68_1,(void *)Cont_69_2,(void *)Cont_70_3,(void *)Cont_71_4,(void *)Cont_72_5,(void *)Cont_73_6,(void *)Always_76_7};
	xsi_register_didat("work_m_00000000002164391802_3823007873", "isim/testbench_isim_beh.exe.sim/work/m_00000000002164391802_3823007873.didat");
	xsi_register_executes(pe);
}
