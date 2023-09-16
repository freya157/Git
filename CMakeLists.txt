cmake_minimum_required(VERSION 3.25)
#指定使用cmake的哪个版本为我工作
project("github C")
#        项目名称 用什么语言
set(CMAKE_C_STANDARD 17)
#遵守哪一个C语言国际标准，至此为固定模板
add_executable(hello.2 hello.2.c )
#把后面的运行为前面的