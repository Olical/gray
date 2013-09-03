set(INCROOT ${PROJECT_SOURCE_DIR}/include/graylib)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/graylib)

add_library(graylib
	${SRCROOT}/graylib.c
	${INCROOT}/graylib.h
)
