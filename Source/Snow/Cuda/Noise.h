#pragma once
#include "CUDAVector.h"

// fractional component of a number
__device__ __forceinline__
float fract(float x) {return x - floor(x);}

// Noise functions from IQ.
// https://www.shadertoy.com/view/lsj3zy
__device__ __forceinline__
float hash( float n ) { return fract(sin(n)*43758.5453123); }

__device__ __forceinline__
CUDAVec3 fract(const CUDAVec3 &v) { return v-CUDAVec3::floor(v); }

__device__ __forceinline__
float mix(float x, float y, float a) {return (1.f-a)*x + a*y; }

__device__ __forceinline__
float noise3( CUDAVec3 x )
{
    CUDAVec3 p = CUDAVec3::floor(x);
    CUDAVec3 f = fract(x);
    f = f*f*(CUDAVec3(3.0) - 2.0*f);

    float n = p.x + p.y*157.0 + 113.0*p.z;
    return mix(mix(mix( hash(n+  0.0), hash(n+  1.0),f.x),
                   mix( hash(n+157.0), hash(n+158.0),f.x),f.y),
               mix(mix( hash(n+113.0), hash(n+114.0),f.x),
                   mix( hash(n+270.0), hash(n+271.0),f.x),f.y),f.z);
}

// 3D fractal brownian motion - https://www.shadertoy.com/view/lsj3zy
__device__ __forceinline__
float fbm3(CUDAVec3 p)
{
    float f = 0.0, x;
    for(int i = 1; i <= 6; ++i) // level of detail
    {
        x = 1 << i;
        f += (noise3(p * x) - 0.5) / x;
    }
    return (f+.3)*1.6667; // returns range between 0,1
}

__host__ __device__ __forceinline__
float halton(int index, int base)
{
    // base is a fixed prime number for each sequence
    float result = 0.f;
    float f = 1/float(base);
    int i = index;
    while (i > 0) {
        result = result + f*(i%base);
        i /= base;
        f /= base;
    }
    return result;
}