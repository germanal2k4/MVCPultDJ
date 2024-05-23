# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ConsoleBPMView_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ConsoleBPMView_autogen.dir/ParseCache.txt"
  "CMakeFiles/DisplayBPMView_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/DisplayBPMView_autogen.dir/ParseCache.txt"
  "CMakeFiles/MVCPultDJ_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/MVCPultDJ_autogen.dir/ParseCache.txt"
  "ConsoleBPMView_autogen"
  "DisplayBPMView_autogen"
  "MVCPultDJ_autogen"
  )
endif()
