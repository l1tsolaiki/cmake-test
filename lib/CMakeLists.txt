add_library(
    greetings
    hello.h
    hello.cpp
)

target_include_directories(greetings PUBLIC "${CMAKE_SOURCE_DIR}/lib")

if (TARGET ch_contrib::mimalloc)
    message("if (TARGET ch_contrib::mimalloc)")
    target_link_libraries(greetings ch_contrib::mimalloc)
endif()

# if (USE_MIMALLOC)
#     message("if (USE_MIMALLOC)")
#     target_include_directories (clickhouse_common_io SYSTEM BEFORE PUBLIC ${MIMALLOC_INCLUDE_DIR})
#     target_link_libraries (clickhouse_common_io PRIVATE ${MIMALLOC_LIBRARY})
# endif ()
