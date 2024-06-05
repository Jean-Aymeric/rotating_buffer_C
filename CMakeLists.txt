cmake_minimum_required(VERSION 3.28)
project(rotating_buffer C)

set(CMAKE_C_STANDARD 11)

add_executable(rotating_buffer main.c
        rotatingbuffer/rotating_buffer.c
        rotatingbuffer/rotating_buffer.h
        rotatingbuffer/buffer_reader.c
        rotatingbuffer/buffer_reader.h
        rotatingbuffer/buffer_writer.c
        rotatingbuffer/buffer_writer.h
        rotatingbuffer/buffer_actor.c
        rotatingbuffer/buffer_actor.h
        rotatingbuffer/data.c
        rotatingbuffer/data.h)
