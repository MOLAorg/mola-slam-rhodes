/* -------------------------------------------------------------------------
 *   A Modular Optimization framework for Localization and mApping  (MOLA)
 * Copyright (C) 2018-2021 Jose Luis Blanco, University of Almeria
 * See LICENSE for license information.
 * ------------------------------------------------------------------------- */
/**
 * @file   OccGrid.h
 * @brief  Class extending MRPT occupancy grid with additional functionalities
 * @author Jose Luis Blanco Claraco
 * @date   Feb 21, 2021
 */
#pragma once

#include <mrpt/maps/COccupancyGridMap2D.h>
#include <mrpt/math/TPoint2D.h>
#include <mrpt/serialization/CSerializable.h>

namespace mola::rhodes
{
/**
 * @brief Extends MRPT's occupancy grid with super-resolution likelihood field.
 *
 */
class OccGrid : public mrpt::serialization::CSerializable
{
    DEFINE_SERIALIZABLE(OccGrid, mola::rhodes)

   public:
    OccGrid()  = default;
    ~OccGrid() = default;

    /** @name Grid size API
     * @{ */

    /** Change the size of gridmap, erasing all its previous contents.
     * \param minCorner The (x,y) coordinates of left-bottom grid corner.
     * \param maxCorner The (x,y) coordinates of right-top grid corner.
     * \param resolution The new size of square cells [meters]
     * \param occupancyValue The occupancy value of cells, tipically 0.5.
     */
    void setSize(
        const mrpt::math::TPoint2Df& minCorner,
        const mrpt::math::TPoint2Df& maxCorner, float resolution,
        float occupancyValue = 0.5f);

    /** Change the size of gridmap, maintaining previous contents.
     * \param minCorner The (x,y) coordinates of left-bottom grid corner.
     * \param maxCorner The (x,y) coordinates of right-top grid corner.
     * \param newCellsOccupancyValue Occupancy of new cells, tipically 0.5.
     * \sa setSize
     */
    void resizeGrid(
        const mrpt::math::TPoint2Df& minCorner,
        const mrpt::math::TPoint2Df& maxCorner,
        float                        newCellsOccupancy = 0.5f) noexcept;

    /** @} */

    /** @name Access data API
     * @{ */

    const mrpt::maps::COccupancyGridMap2D& grid() const { return grid_; }

    /** @} */

    /** @name Likelihood API
     * @{ */

    /** @} */

   private:
    mrpt::maps::COccupancyGridMap2D grid_;
};

}  // namespace mola::rhodes
