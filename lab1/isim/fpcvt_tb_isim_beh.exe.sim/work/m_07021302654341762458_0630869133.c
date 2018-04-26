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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Xilinx_host/CS152A/lab1/countLeadingZeros_andExtract.v";
static int ng1[] = {11, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {7U, 0U};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {10, 0};
static int ng7[] = {9, 0};
static unsigned int ng8[] = {6U, 0U};
static int ng9[] = {8, 0};
static unsigned int ng10[] = {5U, 0U};
static int ng11[] = {7, 0};
static unsigned int ng12[] = {4U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {3U, 0U};
static int ng15[] = {5, 0};
static unsigned int ng16[] = {2U, 0U};
static int ng17[] = {4, 0};
static unsigned int ng18[] = {0U, 0U};



static void Always_15_0(char *t0)
{
    char t6[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 3000);
    *((int *)t2) = 1;
    t3 = (t0 + 2712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1008U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t6 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB9;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t11) = 1;

LAB9:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB17;

LAB14:    if (t23 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t11) = 1;

LAB17:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB25;

LAB22:    if (t23 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t11) = 1;

LAB25:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB33;

LAB30:    if (t23 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t11) = 1;

LAB33:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng11)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB41;

LAB38:    if (t23 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t11) = 1;

LAB41:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng13)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB49;

LAB46:    if (t23 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t11) = 1;

LAB49:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng15)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB57;

LAB54:    if (t23 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t11) = 1;

LAB57:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng17)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB65;

LAB62:    if (t23 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t11) = 1;

LAB65:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(48, ng0);

LAB70:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 0);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 0);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 15U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 15U);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB68:
LAB60:
LAB52:
LAB44:
LAB36:
LAB28:
LAB20:
LAB12:    goto LAB2;

LAB8:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(16, ng0);

LAB13:    xsi_set_current_line(17, ng0);
    t33 = ((char*)((ng3)));
    t34 = (t0 + 1448);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 3);
    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB16:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(20, ng0);

LAB21:    xsi_set_current_line(21, ng0);
    t26 = ((char*)((ng3)));
    t27 = (t0 + 1448);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 7);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 7);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 15U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 15U);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 4);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 6);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 6);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    goto LAB20;

LAB24:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(24, ng0);

LAB29:    xsi_set_current_line(25, ng0);
    t26 = ((char*)((ng8)));
    t27 = (t0 + 1448);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 6);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 6);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 15U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 15U);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 4);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 5);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 5);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    goto LAB28;

LAB32:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(28, ng0);

LAB37:    xsi_set_current_line(29, ng0);
    t26 = ((char*)((ng10)));
    t27 = (t0 + 1448);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 5);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 5);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 15U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 15U);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 4);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 4);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 4);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    goto LAB36;

LAB40:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(32, ng0);

LAB45:    xsi_set_current_line(33, ng0);
    t26 = ((char*)((ng12)));
    t27 = (t0 + 1448);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 4);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 4);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 15U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 15U);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 4);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 3);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 3);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    goto LAB44;

LAB48:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(36, ng0);

LAB53:    xsi_set_current_line(37, ng0);
    t26 = ((char*)((ng14)));
    t27 = (t0 + 1448);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 3);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 3);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 15U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 15U);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 4);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 2);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    goto LAB52;

LAB56:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(40, ng0);

LAB61:    xsi_set_current_line(41, ng0);
    t26 = ((char*)((ng16)));
    t27 = (t0 + 1448);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 2);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 2);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 15U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 15U);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 1);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    goto LAB60;

LAB64:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(44, ng0);

LAB69:    xsi_set_current_line(45, ng0);
    t26 = ((char*)((ng5)));
    t27 = (t0 + 1448);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 1);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 1);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 15U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 15U);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 4);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 0);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    goto LAB68;

}


extern void work_m_07021302654341762458_0630869133_init()
{
	static char *pe[] = {(void *)Always_15_0};
	xsi_register_didat("work_m_07021302654341762458_0630869133", "isim/fpcvt_tb_isim_beh.exe.sim/work/m_07021302654341762458_0630869133.didat");
	xsi_register_executes(pe);
}
