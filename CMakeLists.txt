cmake_minimum_required(VERSION 4.2.0)

project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/Cheerryyy/cmake_planning_demo."
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

# 变量设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)

# 三方库
set(EIGEN5_INCLUDE_DIR "C:/Users/ChenC/Software/vscode_cpp_tools/eigen-5.0.0")

# 添加子目录
add_subdirectory(src)