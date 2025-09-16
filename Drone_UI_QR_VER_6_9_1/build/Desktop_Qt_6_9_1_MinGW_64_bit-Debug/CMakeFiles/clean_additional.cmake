# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Drone_UI_QR_VER_6_9_1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Drone_UI_QR_VER_6_9_1_autogen.dir\\ParseCache.txt"
  "Drone_UI_QR_VER_6_9_1_autogen"
  )
endif()
