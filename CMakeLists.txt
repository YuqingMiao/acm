cmake_minimum_required(VERSION 3.7)
project(acm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        problems/cf283div1d.cpp
        problems/cf742b.cpp
        problems/cf784A.cpp
        problems/cf796a.cpp
        problems/cf796b.cpp
        problems/uva1225.cpp
        problems/uva1583.cpp
        problems/uva1584.cpp
        problems/uva1585.cpp
        problems/uva1586.cpp
        "problems/uva227(1.cpp"
        problems/uva227.cpp
        problems/uva272.cpp
        problems/uva340.cpp
        problems/uva401.cpp
        problems/uva455.cpp)

add_executable(acm ${SOURCE_FILES})