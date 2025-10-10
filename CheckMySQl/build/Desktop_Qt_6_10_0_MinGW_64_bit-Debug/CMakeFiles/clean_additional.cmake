# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\CheckMySql_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CheckMySql_autogen.dir\\ParseCache.txt"
  "CheckMySql_autogen"
  )
endif()
