cmake_minimum_required(VERSION 3.8.0)
project(FLOWERS_TESTS VERSION 0.0.1)

# add test files
set(SOURCES
	simple_test.cpp
)

# add executable for test code
add_executable(FLOWERS_TESTS ${SOURCES})

# link with googletest library
target_link_libraries(FLOWERS_TESTS
	PUBLIC
	gtest_main
	FLOWERS
)

add_test(
	NAME FLOWERS_TESTS
	COMMAND FLOWERS_TESTS
)
