cmake_minimum_required (VERSION 2.6) 
 
set (PROJECT calculator) 
 
project (${PROJECT}) 
 
set (HEADERS 
	MyForm.h)
 
set (SOURCES 
	MyForm.cpp
	) 
 
add_executable (${PROJECT} ${HEADERS} ${SOURCES})
