# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\EmployeeSystem_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\EmployeeSystem_autogen.dir\\ParseCache.txt"
  "EmployeeSystem_autogen"
  )
endif()
