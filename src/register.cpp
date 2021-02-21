/* -------------------------------------------------------------------------
 *   A Modular Optimization framework for Localization and mApping  (MOLA)
 * Copyright (C) 2018-2021 Jose Luis Blanco, University of Almeria
 * See LICENSE for license information.
 * ------------------------------------------------------------------------- */
/**
 * @file   register.cpp
 * @brief  Register MOLA modules in the factory
 * @author Jose Luis Blanco Claraco
 * @date   Jan 08, 2018
 */

/** \defgroup mola_slam_rhodes_grp mola-slam-rhodes
 * MOLA module: The RHODES 2D SLAM system.
 *
 */

//#include <mola-slam-rhodes/OccGrid.h>
#include <mrpt/core/initializer.h>
using namespace mola::rhodes;

MRPT_INITIALIZER(do_register_slam_rhodes)
{
    // Register modules:
    //MOLA_REGISTER_MODULE(xx);

    // and register RTTI info:
    // xx
}
