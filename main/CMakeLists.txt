set (MAIN_SRC main.cpp)
add_executable(${PROJECT_NAME} ${MAIN_SRC})

# specify link library
target_link_libraries(${PROJECT_NAME} liblox libcommon)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)