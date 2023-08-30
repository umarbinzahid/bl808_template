cmake_minimum_required(VERSION 3.15)

include(proj.conf)

find_package(bouffalo_sdk REQUIRED HINTS $ENV{BL_SDK_BASE})

set(CMAKE_TOOLCHAIN_FILE=$ENV{BL_SDK_BASE}/cmake/toolchain.cmake)

sdk_set_main_file(main.c)

project(sample)
