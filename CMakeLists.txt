cmake_minimum_required(VERSION 3.20)
project(RayTracer)

# C++20 설정
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 실행 파일 생성
add_executable(ray_tracer
    src/main.cpp
)

# include 디렉토리 추가
target_include_directories(ray_tracer PRIVATE includes)