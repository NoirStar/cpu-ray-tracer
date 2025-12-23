# CPU Ray Tracer (Learning Project)

이 레포지토리는 **AI 시대에 사고력을 유지하기 위한 학습용 레이 트레이서 프로젝트**입니다.

## 🎯 프로젝트 목표

- 레이 트레이서를 **CPU 기반으로 직접 구현**
- 그래픽 API(OpenGL/Vulkan)에 의존하지 않음
- 결과물보다 **이해 가능한 구조와 사고 과정**을 우선
- 성능, 메모리, 병렬화에 대한 감각 회복

## ❌ 이 프로젝트에서 하지 않는 것

- 코드 자동 생성에만 의존하지 않기
- 이유 없이 추상화하지 않기
- "일단 돌아가니까 OK" 식의 구현

## ✅ 이 프로젝트에서 지키는 원칙

- 모든 주요 로직은 직접 타이핑하고 이해한다
- 성능 관련 선택에는 반드시 근거를 남긴다
- 한 단계씩 완성하고 다음 단계로 넘어간다
- 설명할 수 없는 코드는 미완성으로 취급한다

## 🧱 단계별 로드맵

### Phase 1: 수학 & 기초 구조
- [ ] Vec3 (벡터 연산)
- [ ] Ray 구조체
- [ ] Camera
- [ ] 간단한 이미지 출력 (PPM)

### Phase 2: Geometry
- [ ] Sphere intersection
- [ ] Plane
- [ ] Hit record 구조

### Phase 3: Shading
- [ ] Lambertian diffuse
- [ ] Reflection
- [ ] Shadow ray

### Phase 4: Acceleration
- [ ] Bounding box
- [ ] BVH (Bounding Volume Hierarchy)

### Phase 5: Performance
- [ ] 멀티스레딩 (std::thread / thread pool)
- [ ] 캐시 친화 구조 개선
- [ ] 간단한 SIMD 실험

## 🛠 기술 스택

- Language: C++20
- Build: CMake
- Platform: CPU only
- Focus: correctness → clarity → performance

## 🧠 이 프로젝트의 진짜 목적

> "AI가 대신 코드를 쓰는 시대에  
> 인간이 사고를 포기하지 않기 위해  
> 일부러 어려운 길을 선택하는 연습"

이 레포는 결과물이 아니라
**사고의 흔적**을 남기는 것이 목적입니다.
