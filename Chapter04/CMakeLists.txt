add_executable(exercise4-1 exercise4-1.cpp)
add_executable(exercise4-2 exercise4-2.cpp)

find_package(SDL)
include_directories(
    ${SDL_includectories}
)
add_executable(exercise4-3 exercise4-3.cpp)