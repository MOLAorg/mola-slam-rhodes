/* -------------------------------------------------------------------------
 *   A Modular Optimization framework for Localization and mApping  (MOLA)
 * Copyright (C) 2018-2019 Jose Luis Blanco, University of Almeria
 * See LICENSE for license information.
 * ------------------------------------------------------------------------- */

/**
 * @file   OccGrid.cpp
 * @brief  Class extending MRPT occupancy grid with additional functionalities
 * @author Jose Luis Blanco Claraco
 * @date   Feb 21, 2021
 */

#include <mola-slam-rhodes/OccGrid.h>

using namespace mola::rhodes;

IMPLEMENTS_SERIALIZABLE(OccGrid, CSerializable, mola::rhodes)

// =====================================
// Serialization
// =====================================

uint8_t OccGrid::serializeGetVersion() const { return 0; }
void    OccGrid::serializeTo(mrpt::serialization::CArchive& out) const
{
    // The data
    // out << XX;
}
void OccGrid::serializeFrom(mrpt::serialization::CArchive& in, uint8_t version)
{
    switch (version)
    {
        case 0:
        {
            // in >> N;
        }
        break;
        default:
            MRPT_THROW_UNKNOWN_SERIALIZATION_VERSION(version);
    };

    // cache reset
}

// =====================================
// Size API
// =====================================

void OccGrid::setSize(
    const mrpt::math::TPoint2Df& minCorner,
    const mrpt::math::TPoint2Df& maxCorner, float resolution,
    float occupancyValue)
{
    //
}

void OccGrid::resizeGrid(
    const mrpt::math::TPoint2Df& minCorner,
    const mrpt::math::TPoint2Df& maxCorner, float newCellsOccupancy) noexcept
{
    //
}
