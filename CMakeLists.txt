cmake_minimum_required(VERSION 3.24)
project("cpp-playground")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -Dzerol -Wall")

file(GLOB_RECURSE SOURCE_FILES "*.c" "*.cpp")

foreach (SOURCE ${SOURCE_FILES})
    get_filename_component(FILE_NAME ${SOURCE} NAME)
    get_filename_component(DIR_PATH ${SOURCE} DIRECTORY)

    # 仅对非法字符进行替换
    string(REGEX REPLACE "[^a-zA-Z0-9_.]" "_" SAFE_FILE_NAME "${FILE_NAME}")
    string(REGEX REPLACE "[^a-zA-Z0-9_]" "_" SAFE_DIR_NAME "${DIR_PATH}")

    # 生成哈希值（保证唯一性）
    string(MD5 FILE_HASH "${DIR_PATH}/${FILE_NAME}")
    string(SUBSTRING ${FILE_HASH} 0 8 FILE_HASH) # 只取前8位，避免太长

    set(TARGET_NAME "${SAFE_FILE_NAME}_${FILE_HASH}")

    add_executable(${TARGET_NAME} ${SOURCE})
endforeach ()
