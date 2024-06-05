cmake_minimum_required(VERSION 3.28)
project(rotating_buffer C)

set(CMAKE_C_STANDARD 11)

add_executable(rotating_buffer main.c
        rotating_buffer.c
        rotating_buffer.h
        buffer_reader.c
        buffer_reader.h
        buffer_writer.c
        buffer_writer.h
        buffer_actor.c
        buffer_actor.h
        data.c
        data.h)
