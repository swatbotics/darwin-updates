# CMakeLists.txt for darwin/Linux/test-programs/ping

set(sources
	ping.cpp
	ports.cpp
	)

add_executable(ping ${sources})

target_link_libraries(ping darwin pthread rt)

