/**
 * @file AtomicMath.hpp
 * @author your name (you@domain.com)
 * @brief AtomicMath implementation
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <cinttypes>

#ifndef __ATOMIC_MATH_HPP__
#define __ATOMIC_MATH_HPP__

namespace Atomic
{
    class Vector3D
    {
    public:
        /**
         * @brief Constructs a new Vector3D instance.
         * 
         * @param x x value.
         * @param y y value.
         * @param z z value.
         */
        Vector3D(float x, float y, float z);

        /**
         * @brief Destroys the Vector3D instance.
         */
        ~Vector3D();

        // -- Operators --
        Vector3D operator*(int other);
        Vector3D operator*(float other);

        // -- Values --
        float x;
        float y;
        float z;
    };

    class RGB
    {
    public:
        /**
         * @brief Constructs a new RGB instance. All values are stored as
         * 8-bit unsigned integers.
         * 
         * @param r Red value.
         * @param g Green value.
         * @param b Blue value.
         */
        RGB(uint8_t r, uint8_t g, uint8_t b);

        /**
         * @brief Destroys the RGB instance.
         * 
         */
        ~RGB();

        // -- Values --
        uint8_t r;
        uint8_t g;
        uint8_t b;
    };
}

#endif