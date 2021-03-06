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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00393575500146401002_0272970057_init();
    work_m_07021302654341762458_0630869133_init();
    work_m_12554542271979010481_3865691683_init();
    work_m_10399121918115968073_3509695277_init();
    work_m_06688200506855175694_3131697401_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_06688200506855175694_3131697401");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
