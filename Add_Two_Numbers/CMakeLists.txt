cmake_minimum_required(VERSION 2.8)

project(Add_Two_Numbers)

FILE(GLOB_RECURSE LibFiles "*.h")
add_custom_target(headers SOURCES ${LibFiles})

aux_source_directory(. DIR_SRCS)

SET(ENV_PATH ${DIR_SRCS})

ADD_EXECUTABLE(${PROJECT_NAME} ${ENV_PATH})
