// SPDX-License-Identifier: GPL-3.0-or-later
/**
 * File: Particle.h
 * Description: This file contains the definition of the Particle class, which represents a particle in the game.
 * Created by: Romain
 * Created on: 06/07/2020
 */

#ifndef DUST_PARTICLE_H
#define DUST_PARTICLE_H

#include "Particle.fwd.h"   // Forward declaration of Particle
#include "game/Map.fwd.h"   // Forward declaration of Map
#include "ParticleType.h"   // Include ParticleType header
#include "view/Color.h"     // Include Color header

/**
 * Class: Particle
 * Description: This class represents a particle in the game. It contains information about the particle's type, color, and state.
 */
class Particle {
public:
    /**
     * Constructor: Particle
     * Description: Constructs a new Particle object with the given type and color.
     * Parameters:
     *  type - The type of the particle.
     *  color - The color of the particle.
     */
    Particle(ParticleType type, Color color);

    /**
     * Destructor: ~Particle
     * Description: Destructs the Particle object.
     */
    virtual ~Particle() = default;

    /**
     * Function: hasChanged
     * Description: Returns whether the particle has changed or not during its update.
     * Returns:
     *  true - If the particle has changed.
     *  false - If the particle has not changed.
     */
    [[nodiscard]] bool hasChanged() const;

    /**
     * Function: getColor
     * Description: Returns a reference to the particle's color.
     * Returns:
     *  Color& - A reference to the particle's color.
     */
    [[nodiscard]] Color& getColor();

    /**
     * Function: update
     * Description: The method to be executed during the particle's update.
     */
    virtual void update() = 0;

protected
