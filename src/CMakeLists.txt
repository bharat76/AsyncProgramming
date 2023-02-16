add_executable(demo
       main.cpp
)
target_include_directories(demo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
add_compile_options(-Wall -pedantic -pthread)

target_compile_features(demo PUBLIC cxx_std_20)
target_link_libraries(demo ${CONAN_LIBS})