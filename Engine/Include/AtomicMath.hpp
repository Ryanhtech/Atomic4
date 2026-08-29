
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
}

#endif