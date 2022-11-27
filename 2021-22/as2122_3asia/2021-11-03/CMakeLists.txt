cmake_minimum_required(VERSION 3.10)

project(perimetro_trapezio_rettangolo)

add_executable(perimetro_trapezio_rettangolo perimetro_trapezio_rettangolo.cpp)

# include_directories("../include/catch2/")

find_package(Doxygen)
set(DOXYGEN_GENERATE_HTML YES)
set(DOXYGEN_GENERATE_MAN NO)
set(OUTPUT_LANGUAGE Italian)

doxygen_add_docs(
    doxygen
    ${PROJECT_SOURCE_DIR}
    COMMENT "Genera la documentazione in HTML"
)
