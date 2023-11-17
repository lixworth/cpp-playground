cmake_minimum_required(VERSION 3.26)
project(Code)

set(CMAKE_CXX_STANDARD 11)

file (GLOB_RECURSE files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" soft ${file})
    add_executable (${soft} ${file})
endforeach ()

file (GLOB_RECURSE files *.c)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" soft ${file})
    add_executable (${soft} ${file}
            uit/1116/1116_c.c
            uit/1116/1116_e.c
            uit/1116/1116_a.cpp
            uit/1116/1116_f.c
            uit/1116/1116_d.c
    )
endforeach ()