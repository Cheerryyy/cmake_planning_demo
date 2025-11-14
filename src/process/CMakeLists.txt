project(process)

add_library(${PROJECT_NAME} 
SHARED
process.cpp
)

target_include_directories(${PROJECT_NAME}
PUBLIC
${PNC_Map_Dir}
${EIGEN5_INCLUDE_DIR}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map
)


