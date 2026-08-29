/**
 * @file Vector3D.cpp
 * @brief Implementation of Vector3D
 * 
 * @copyright Copyright (c) 2026 Ryanhtech Labs.
 * 
 */

#include <AtomicMath.hpp>

Atomic::Vector3D::Vector3D(float x, float y, float z)
{
    x = x;
    y = y;
    z = z;
}

Atomic::Vector3D::~Vector3D()
{

}

Atomic::Vector3D Atomic::Vector3D::operator*(float other)
{
    return Atomic::Vector3D(x * other, y * other, z * other);
}

Atomic::Vector3D Atomic::Vector3D::operator*(int other)
{
    return Atomic::Vector3D(x * other, y * other, z * other);
}