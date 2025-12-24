#pragma once

#include "ray.h"

struct Camera {
    int image_width;
    int image_height;
    Vec3 origin;
    float viewport_width;
    float viewport_height;
    float focal_length;
    
    Ray get_ray(int x, int y) const {
        Vec3 lower_left_corner = {
            -viewport_width / 2,
            -viewport_height / 2,
            -focal_length
        };
        float u = static_cast<float>(x) / (image_width - 1);
        float v = static_cast<float>(y) / (image_height - 1);

        Vec3 pixel_pos = lower_left_corner + 
            u * Vec3{viewport_width, 0, 0} +
            v * Vec3{0, viewport_height, 0};

        // 카메라에서 pixel_pos 로의 방향
        Vec3 direction = pixel_pos - origin;
        
        return Ray {
            origin,
            direction,
        };
    }
};