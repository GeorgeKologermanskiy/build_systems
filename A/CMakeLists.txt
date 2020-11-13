project(A)

add_custom_command(
    OUTPUT index.h
    COMMAND python ${PROJECT_SOURCE_DIR}/preparing.py index.h
    DEPENDS ${PROJECT_SOURCE_DIR}/preparing.py
    COMMENT "Generating index.h"
)

add_custom_target(IndexGenerator DEPENDS index.h)
