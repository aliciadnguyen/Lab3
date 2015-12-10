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
static const char *ng0 = "C:/Users/Alicia/Documents/CSE140L/Lab3/Traffic.v";
static int ng1[] = {1, 0};
static int ng2[] = {40, 0};
static int ng3[] = {0, 0};
static int ng4[] = {3, 0};
static int ng5[] = {10, 0};



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_100_1(char *t0)
{
    char t8[8];
    char t29[8];
    char t44[8];
    char t52[8];
    char t94[8];
    char t108[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
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
    unsigned int t26;
    char *t27;
    char *t28;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t109;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4536);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);

LAB5:    xsi_set_current_line(102, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 6, t7, 32);
    t9 = (t0 + 3048);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 6);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB9;

LAB6:    if (t19 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t7 = (t8 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB98;

LAB95:    if (t19 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t8) = 1;

LAB98:    t7 = (t8 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB99;

LAB100:
LAB101:    goto LAB2;

LAB8:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(104, ng0);

LAB13:    xsi_set_current_line(105, ng0);
    t9 = (t0 + 2088);
    t27 = (t9 + 56U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t30) != 0)
        goto LAB16;

LAB17:    t37 = (t29 + 4);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB18;

LAB19:    memcpy(t52, t29, 8);

LAB20:    t84 = (t52 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t52);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB42;

LAB43:
LAB44:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t5) != 0)
        goto LAB57;

LAB58:    t7 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t7);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB59;

LAB60:    memcpy(t44, t8, 8);

LAB61:    t51 = (t44 + 4);
    t63 = *((unsigned int *)t51);
    t64 = (~(t63));
    t65 = *((unsigned int *)t44);
    t68 = (t65 & t64);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB69;

LAB70:
LAB71:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB82;

LAB83:
LAB84:    goto LAB12;

LAB14:    *((unsigned int *)t29) = 1;
    goto LAB17;

LAB16:    t36 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB17;

LAB18:    t41 = (t0 + 1928);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t43);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t45) != 0)
        goto LAB23;

LAB24:    t53 = *((unsigned int *)t29);
    t54 = *((unsigned int *)t44);
    t55 = (t53 & t54);
    *((unsigned int *)t52) = t55;
    t56 = (t29 + 4);
    t57 = (t44 + 4);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB20;

LAB21:    *((unsigned int *)t44) = 1;
    goto LAB24;

LAB23:    t51 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB24;

LAB25:    t64 = *((unsigned int *)t52);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t52) = (t64 | t65);
    t66 = (t29 + 4);
    t67 = (t44 + 4);
    t68 = *((unsigned int *)t29);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t44);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t76 = (t69 & t71);
    t77 = (t73 & t75);
    t78 = (~(t76));
    t79 = (~(t77));
    t80 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t80 & t78);
    t81 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t81 & t79);
    t82 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t82 & t78);
    t83 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t83 & t79);
    goto LAB27;

LAB28:    xsi_set_current_line(105, ng0);

LAB31:    xsi_set_current_line(106, ng0);
    t90 = (t0 + 3048);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = ((char*)((ng2)));
    memset(t94, 0, 8);
    t95 = (t92 + 4);
    if (*((unsigned int *)t95) != 0)
        goto LAB33;

LAB32:    t96 = (t93 + 4);
    if (*((unsigned int *)t96) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t92) < *((unsigned int *)t93))
        goto LAB34;

LAB35:    t98 = (t94 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t94);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(109, ng0);

LAB41:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB39:    goto LAB30;

LAB33:    t97 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t94) = 1;
    goto LAB35;

LAB37:    xsi_set_current_line(106, ng0);

LAB40:    xsi_set_current_line(107, ng0);
    t104 = (t0 + 3048);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = ((char*)((ng1)));
    memset(t108, 0, 8);
    xsi_vlog_unsigned_add(t108, 32, t106, 6, t107, 32);
    t109 = (t0 + 3048);
    xsi_vlogvar_assign_value(t109, t108, 0, 0, 6);
    goto LAB39;

LAB42:    xsi_set_current_line(116, ng0);

LAB45:    xsi_set_current_line(117, ng0);
    t6 = (t0 + 3048);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t27 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t28 = (t9 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB47;

LAB46:    t30 = (t27 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t9) < *((unsigned int *)t27))
        goto LAB48;

LAB49:    t37 = (t8 + 4);
    t15 = *((unsigned int *)t37);
    t16 = (~(t15));
    t17 = *((unsigned int *)t8);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(119, ng0);

LAB54:    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB53:    goto LAB44;

LAB47:    t36 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB49;

LAB48:    *((unsigned int *)t8) = 1;
    goto LAB49;

LAB51:    xsi_set_current_line(118, ng0);
    t41 = (t0 + 3048);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t45 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t43, 6, t45, 32);
    t51 = (t0 + 3048);
    xsi_vlogvar_assign_value(t51, t29, 0, 0, 6);
    goto LAB53;

LAB55:    *((unsigned int *)t8) = 1;
    goto LAB58;

LAB57:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB58;

LAB59:    t9 = (t0 + 1608);
    t27 = (t9 + 56U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    t18 = *((unsigned int *)t30);
    t19 = (~(t18));
    t20 = *((unsigned int *)t28);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t30) != 0)
        goto LAB64;

LAB65:    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t29);
    t25 = (t23 & t24);
    *((unsigned int *)t44) = t25;
    t37 = (t8 + 4);
    t41 = (t29 + 4);
    t42 = (t44 + 4);
    t26 = *((unsigned int *)t37);
    t31 = *((unsigned int *)t41);
    t32 = (t26 | t31);
    *((unsigned int *)t42) = t32;
    t33 = *((unsigned int *)t42);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB61;

LAB62:    *((unsigned int *)t29) = 1;
    goto LAB65;

LAB64:    t36 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB65;

LAB66:    t35 = *((unsigned int *)t44);
    t38 = *((unsigned int *)t42);
    *((unsigned int *)t44) = (t35 | t38);
    t43 = (t8 + 4);
    t45 = (t29 + 4);
    t39 = *((unsigned int *)t8);
    t40 = (~(t39));
    t46 = *((unsigned int *)t43);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (~(t48));
    t50 = *((unsigned int *)t45);
    t53 = (~(t50));
    t76 = (t40 & t47);
    t77 = (t49 & t53);
    t54 = (~(t76));
    t55 = (~(t77));
    t59 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t59 & t54);
    t60 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t60 & t55);
    t61 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t61 & t54);
    t62 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t62 & t55);
    goto LAB68;

LAB69:    xsi_set_current_line(128, ng0);

LAB72:    xsi_set_current_line(129, ng0);
    t56 = (t0 + 3048);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t66 = ((char*)((ng5)));
    memset(t52, 0, 8);
    t67 = (t58 + 4);
    if (*((unsigned int *)t67) != 0)
        goto LAB74;

LAB73:    t84 = (t66 + 4);
    if (*((unsigned int *)t84) != 0)
        goto LAB74;

LAB77:    if (*((unsigned int *)t58) < *((unsigned int *)t66))
        goto LAB75;

LAB76:    t91 = (t52 + 4);
    t70 = *((unsigned int *)t91);
    t71 = (~(t70));
    t72 = *((unsigned int *)t52);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(131, ng0);

LAB81:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB80:    goto LAB71;

LAB74:    t90 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB76;

LAB75:    *((unsigned int *)t52) = 1;
    goto LAB76;

LAB78:    xsi_set_current_line(130, ng0);
    t92 = (t0 + 3048);
    t93 = (t92 + 56U);
    t95 = *((char **)t93);
    t96 = ((char*)((ng1)));
    memset(t94, 0, 8);
    xsi_vlog_unsigned_add(t94, 32, t95, 6, t96, 32);
    t97 = (t0 + 3048);
    xsi_vlogvar_assign_value(t97, t94, 0, 0, 6);
    goto LAB80;

LAB82:    xsi_set_current_line(138, ng0);

LAB85:    xsi_set_current_line(139, ng0);
    t6 = (t0 + 3048);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t27 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t28 = (t9 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB87;

LAB86:    t30 = (t27 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB87;

LAB90:    if (*((unsigned int *)t9) < *((unsigned int *)t27))
        goto LAB88;

LAB89:    t37 = (t8 + 4);
    t15 = *((unsigned int *)t37);
    t16 = (~(t15));
    t17 = *((unsigned int *)t8);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(141, ng0);

LAB94:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB93:    goto LAB84;

LAB87:    t36 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB89;

LAB88:    *((unsigned int *)t8) = 1;
    goto LAB89;

LAB91:    xsi_set_current_line(140, ng0);
    t41 = (t0 + 3048);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t45 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t43, 6, t45, 32);
    t51 = (t0 + 3048);
    xsi_vlogvar_assign_value(t51, t29, 0, 0, 6);
    goto LAB93;

LAB97:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB98;

LAB99:    xsi_set_current_line(152, ng0);
    t9 = ((char*)((ng3)));
    t27 = (t0 + 3048);
    xsi_vlogvar_assign_value(t27, t9, 0, 0, 6);
    goto LAB101;

}


extern void work_m_00000000002557364032_3256286812_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_100_1};
	xsi_register_didat("work_m_00000000002557364032_3256286812", "isim/traffic_test_isim_beh.exe.sim/work/m_00000000002557364032_3256286812.didat");
	xsi_register_executes(pe);
}
