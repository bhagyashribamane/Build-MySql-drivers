# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MySqlTest_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MySqlTest_autogen.dir\\ParseCache.txt"
  "MySqlTest_autogen"
  )
endif()
