#include <iostream>
#include "camera.h"

int main() {
    // 1. 이미지 설정
    const int width = 800;
    const int height = 600;
    
    // 2. Camera 생성
    Camera camera = {
        .image_width = width,
        .image_height = height,
        .origin = {0.0f, 0.0f, 0.0f},
        .viewport_width = 4.0f,
        .viewport_height = 3.0f,
        .focal_length = 1.0f
    };

    // 3. PPM 헤더 출력
    std::cout << "P3\n" << width << " " << height << "\n255\n";

    Vec3 white = {1.0f, 1.0f, 1.0f};
    Vec3 sky = {0.5f, 0.7f, 1.0f};

    for (int y=height-1; y>=0; --y) {
        for (int x=0; x<width; ++x) {
            float t = static_cast<float>(y) / (height-1);
            Vec3 color = (1 - t) * white + t * sky;
            int r = static_cast<int>(255.999f * color.x);
            int g = static_cast<int>(255.999f * color.y);
            int b = static_cast<int>(255.999f * color.z);
            std::cout << r << ' ' << g << ' ' << b << '\n';
        }
    }
        

    
    return 0;
}