set(INCROOT ${PROJECT_SOURCE_DIR}/include/gray)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/gray)

add_executable(gray
	${SRCROOT}/main.c
	${SRCROOT}/helpers.c
	${INCROOT}/helpers.h
)