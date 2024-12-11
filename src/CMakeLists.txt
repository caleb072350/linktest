# 添加库文件路径
set(LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../lib) # 将 /path/to/your/libmodule.a 替换为你的库文件的实际路径

# 添加头文件路径
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../include) # 将 /path/to/your/headers 替换为你的头文件的实际路径

add_executable(test main.cpp)

# 添加头文件路径到目标
target_include_directories(test PUBLIC ${INCLUDE_DIR})

# 链接库文件
target_link_libraries(test PRIVATE ${LIB_DIR}/libmybase64.a)
target_link_libraries(test PRIVATE ${LIB_DIR}/libbase64.a)