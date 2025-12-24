#pragma once
#include <cmath>

struct Vec3 {
    float x;
    float y;
    float z;
};

inline Vec3 operator+(const Vec3& a, const Vec3& b) {
    return Vec3{ a.x + b.x, a.y + b.y, a.z + b.z };
}

inline Vec3 operator-(const Vec3& a, const Vec3& b) {
    return Vec3{ a.x - b.x, a.y - b.y, a.z - b.z };
}

inline Vec3 operator-(const Vec3& a) {
    return { -a.x, -a.y, -a.z };
}

// 광선의 공식에서 사용
inline Vec3 operator*(const Vec3& a, float s) {
    return Vec3 { a.x * s, a.y * s, a.z * s };
}

inline Vec3 operator*(float s, const Vec3& a) {
    return a * s;
}

inline Vec3 operator*(const Vec3& a, const Vec3& b) {
    return { a.x * b.x, a.y * b.y, a.z * b.z };
}


inline Vec3 operator/(const Vec3& a, float s) {
    return { a.x / s, a.y / s, a.z / s };
}

inline Vec3 cross(const Vec3& a, const Vec3& b) { // 외적
    return { 
        a.y * b.z - a.z * b.y, 
        a.z * b.x - a.x * b.z, 
        a.x * b.y - a.y * b.x };
}

inline float dot(const Vec3& a, const Vec3& b) { // 내적
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

inline float length(const Vec3& a) {
    return sqrt(dot(a, a));
}

inline Vec3 normalize(const Vec3& a) {
    return a / length(a);
}