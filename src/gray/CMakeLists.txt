set(INCROOT ${PROJECT_SOURCE_DIR}/include/gray)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/gray)

add_executable(gray
	${SRCROOT}/main.c
)

target_link_libraries(gray graylib)