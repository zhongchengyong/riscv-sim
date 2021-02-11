file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testriscv ${SRCS})

TARGET_LINK_LIBRARIES(testriscv
    libframework
    libgtest
    libgmock
)

add_test(NAME testriscv
         COMMAND testriscv)
