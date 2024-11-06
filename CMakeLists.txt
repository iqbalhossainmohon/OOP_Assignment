cmake_minimum_required(VERSION 3.28)
project(Assignment)

set(CMAKE_CXX_STANDARD 17)

add_executable(Assignment main.cpp
        Chapter-4/Exercises/exercises4.1.1.cpp
        Chapter-4/Exercises/exercises4.1.2.cpp
        Chapter-4/Exercises/exercises4.1.3.cpp
        Chapter-4/4.2/Exercises/exercises4.2.1.cpp
        Chapter-4/4.2/Exercises/exercises4.2.2.cpp
        Chapter-4/4.3/Exercises/exercises4.3.1.cpp
        Chapter-4/4.4/Exercises/exercises4.4.1.cpp
        Chapter-4/4.4/Exercises/exercises4.4.2.cpp
        Chapter-4/4.5/Exercises/exercises4.5.1.cpp
        Chapter-4/4.6/Exercises/exercises4.6.1.cpp
        Chapter-4/4.7/Exercises/exercises4.7.1.cpp
        Chapter-4/4.8/Exercises/exercises4.8.1.cpp
        Chapter-4/4.2/Example/example4.2.1.cpp
        Chapter-4/4.3/Example/example4.3.1.cpp
        Chapter-4/4.3/Example/example4.3.2.cpp
        Chapter-4/4.4/Example/example4.4.1.cpp
        Chapter-4/4.4/Example/example4.4.2.cpp
        Chapter-4/4.5/Example/example4.5.1.cpp
        Chapter-4/4.5/Example/example4.5.2.cpp
        Chapter-4/4.5/Example/example4.5.3.cpp
        Chapter-4/4.5/Example/example4.5.4.cpp
        Chapter-4/4.5/Example/example4.5.5.cpp
        Chapter-4/4.6/Example/example4.6.1.cpp
        Chapter-4/4.6/Example/example4.6.2.cpp
        Chapter-4/4.7/Example/example4.7.1.cpp
        Chapter-4/4.7/Example/example4.7.2.cpp
        Chapter-4/4.8/Example/example4.8.1.cpp
        Chapter-5/5.1/Exercises/exercises5.1.1.cpp
        Chapter-5/5.1/Exercises/exercises5.1.2.cpp
        Chapter-5/5.2/Exercises/exercises5.2.1.cpp
        Chapter-5/5.4/Exercises/exercises5.4.1.cpp
        Chapter-5/5.4/Exercises/exercises5.4.2.cpp
        Chapter-5/5.6/Exercises/exercises5.6.1.cpp
        Chapter-5/5.1/Example/example5.1.1.cpp
        Chapter-5/5.1/Example/example5.1.2.cpp
        Chapter-5/5.1/Example/example5.1.3.cpp
        Chapter-5/5.1/Example/example5.1.4.cpp
        Chapter-5/5.2/Example/example5.2.1.cpp
        Chapter-5/5.2/Example/example5.2.2.cpp
        Chapter-5/5.4/Example/example5.4.1.cpp
        Chapter-5/5.4/Example/example5.4.2.cpp
        Chapter-5/5.4/Example/example5.4.3.cpp
        Chapter-5/5.5/Example/example5.5.1.cpp
        Chapter-5/5.5/Example/example5.5.2.cpp
        Chapter-5/5.5/Example/example5.5.3.cpp
        Chapter-5/5.5/Example/example5.5.4.cpp
        Chapter-5/5.6/Example/example5.6.1.cpp
        Chapter-6/6.2/Exercises/exercises6.2.1.cpp
        Chapter-6/6.3/Exercises/exercises6.3.1.cpp
        Chapter-6/6.4/Exercises/exercises6.4.1.cpp
        Chapter-6/6.4/Exercises/exercises6.4.2.cpp
        Chapter-6/6.5/Exercises/exercises6.5.1.cpp
        Chapter-6/6.5/Exercises/exercises6.5.2.cpp
        Chapter-6/6.5/Exercises/exercises6.5.3.cpp
        Chapter-6/6.6/Exercises/exercises6.6.1.cpp
        Chapter-6/6.7/Exercises/exercises6.7.1.cpp
        Chapter-6/6.2/Example/example6.2.1.cpp
        Chapter-6/6.2/Example/example6.2.2.cpp
        Chapter-6/6.3/Example/example6.3.1.cpp
        Chapter-6/6.4/Example/example6.4.1.cpp
        Chapter-6/6.4/Example/example6.4.2.cpp
        Chapter-6/6.5/Example/example6.5.1.cpp
        Chapter-6/6.5/Example/example6.5.2.cpp
        Chapter-6/6.5/Example/example6.5.3.cpp
        Chapter-6/6.6/Example/example6.6.1.cpp
        Chapter-6/6.7/Example/example6.7.1.cpp
        Chapter-6/6.7/Example/example6.7.2.cpp
        Chapter-6/6.7/Example/example6.7.3.cpp)
add_executable(exercises4.1.1 Chapter-4/Exercises/exercises4.1.1.cpp)
add_executable(exercises4.1.2 Chapter-4/Exercises/exercises4.1.2.cpp)
add_executable(exercises4.1.3 Chapter-4/Exercises/exercises4.1.3.cpp)
add_executable(exercises4.2.1 Chapter-4/4.2/Exercises/exercises4.2.1.cpp)
add_executable(exercises4.2.2 Chapter-4/4.2/Exercises/exercises4.2.2.cpp)
add_executable(exercises4.3.1 Chapter-4/4.3/Exercises/exercises4.3.1.cpp)
add_executable(exercises4.4.1 Chapter-4/4.4/Exercises/exercises4.4.1.cpp)
add_executable(exercises4.4.2 Chapter-4/4.4/Exercises/exercises4.4.2.cpp)
add_executable(exercises4.5.1 Chapter-4/4.5/Exercises/exercises4.5.1.cpp)
add_executable(exercises4.6.1 Chapter-4/4.6/Exercises/exercises4.6.1.cpp)
add_executable(exercises4.7.1 Chapter-4/4.7/Exercises/exercises4.7.1.cpp)
add_executable(exercises4.8.1 Chapter-4/4.8/Exercises/exercises4.8.1.cpp)
add_executable(example4.2.1 Chapter-4/4.2/Example/example4.2.1.cpp)
add_executable(example4.3.1 Chapter-4/4.3/Example/example4.3.1.cpp)
add_executable(example4.3.2 Chapter-4/4.3/Example/example4.3.2.cpp)
add_executable(example4.4.1 Chapter-4/4.4/Example/example4.4.1.cpp)
add_executable(example4.4.2 Chapter-4/4.4/Example/example4.4.2.cpp)
add_executable(example4.5.1 Chapter-4/4.5/Example/example4.5.1.cpp)
add_executable(example4.5.2 Chapter-4/4.5/Example/example4.5.2.cpp)
add_executable(example4.5.3 Chapter-4/4.5/Example/example4.5.3.cpp)
add_executable(example4.5.4 Chapter-4/4.5/Example/example4.5.4.cpp)
add_executable(example4.5.5 Chapter-4/4.5/Example/example4.5.5.cpp)
add_executable(example4.6.1 Chapter-4/4.6/Example/example4.6.1.cpp)
add_executable(example4.6.2 Chapter-4/4.6/Example/example4.6.2.cpp)
add_executable(example4.7.1 Chapter-4/4.7/Example/example4.7.1.cpp)
add_executable(example4.7.2 Chapter-4/4.7/Example/example4.7.2.cpp)
add_executable(example4.8.1 Chapter-4/4.8/Example/example4.8.1.cpp)
add_executable(exercises5.1.1 Chapter-5/5.1/Exercises/exercises5.1.1.cpp)
add_executable(exercises5.1.2 Chapter-5/5.1/Exercises/exercises5.1.2.cpp)
add_executable(exercises5.2.1 Chapter-5/5.2/Exercises/exercises5.2.1.cpp)
add_executable(exercises5.4.1 Chapter-5/5.4/Exercises/exercises5.4.1.cpp)
add_executable(exercises5.4.2 Chapter-5/5.4/Exercises/exercises5.4.2.cpp)
add_executable(exercises5.6.1 Chapter-5/5.6/Exercises/exercises5.6.1.cpp)
add_executable(example5.1.1 Chapter-5/5.1/Example/example5.1.1.cpp)
add_executable(example5.1.2 Chapter-5/5.1/Example/example5.1.2.cpp)
add_executable(example5.1.3 Chapter-5/5.1/Example/example5.1.3.cpp)
add_executable(example5.1.4 Chapter-5/5.1/Example/example5.1.4.cpp)
add_executable(example5.2.1 Chapter-5/5.2/Example/example5.2.1.cpp)
add_executable(example5.2.2 Chapter-5/5.2/Example/example5.2.2.cpp)
add_executable(example5.4.1 Chapter-5/5.4/Example/example5.4.1.cpp)
add_executable(example5.4.2 Chapter-5/5.4/Example/example5.4.2.cpp)
add_executable(example5.4.3 Chapter-5/5.4/Example/example5.4.3.cpp)
add_executable(example5.5.1 Chapter-5/5.5/Example/example5.5.1.cpp)
add_executable(example5.5.2 Chapter-5/5.5/Example/example5.5.2.cpp)
add_executable(example5.5.3 Chapter-5/5.5/Example/example5.5.3.cpp)
add_executable(example5.5.4 Chapter-5/5.5/Example/example5.5.4.cpp)
add_executable(example5.6.1 Chapter-5/5.6/Example/example5.6.1.cpp)
add_executable(exercises6.2.1 Chapter-6/6.2/Exercises/exercises6.2.1.cpp)
add_executable(exercises6.3.1 Chapter-6/6.3/Exercises/exercises6.3.1.cpp)
add_executable(exercises6.4.1 Chapter-6/6.4/Exercises/exercises6.4.1.cpp)
add_executable(exercises6.4.2 Chapter-6/6.4/Exercises/exercises6.4.2.cpp)
add_executable(exercises6.5.1 Chapter-6/6.5/Exercises/exercises6.5.1.cpp)
add_executable(exercises6.5.2 Chapter-6/6.5/Exercises/exercises6.5.2.cpp)
add_executable(exercises6.5.3 Chapter-6/6.5/Exercises/exercises6.5.3.cpp)
add_executable(exercises6.6.1 Chapter-6/6.6/Exercises/exercises6.6.1.cpp)
add_executable(exercises6.7.1 Chapter-6/6.7/Exercises/exercises6.7.1.cpp)
add_executable(example6.2.1 Chapter-6/6.2/Example/example6.2.1.cpp)
add_executable(example6.2.2 Chapter-6/6.2/Example/example6.2.2.cpp)
add_executable(example6.3.1 Chapter-6/6.3/Example/example6.3.1.cpp)
add_executable(example6.4.1 Chapter-6/6.4/Example/example6.4.1.cpp)
add_executable(example6.4.2 Chapter-6/6.4/Example/example6.4.2.cpp)
add_executable(example6.5.1 Chapter-6/6.5/Example/example6.5.1.cpp)
add_executable(example6.5.2 Chapter-6/6.5/Example/example6.5.2.cpp)
add_executable(example6.5.3 Chapter-6/6.5/Example/example6.5.3.cpp)
add_executable(example6.6.1 Chapter-6/6.6/Example/example6.6.1.cpp)
add_executable(example6.7.1 Chapter-6/6.7/Example/example6.7.1.cpp)
add_executable(example6.7.2 Chapter-6/6.7/Example/example6.7.2.cpp)
add_executable(example6.7.3 Chapter-6/6.7/Example/example6.7.3.cpp)
