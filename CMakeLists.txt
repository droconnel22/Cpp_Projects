cmake_minimum_required(VERSION 3.14.0)

if(MSVC)
  add_complie_options(/W4)
else()
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(intro main.cpp)
target_compile_features(intro PRIVATE cxx_lambda_init_captures)

