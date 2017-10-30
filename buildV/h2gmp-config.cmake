if(NOT TARGET libh2gmp)
  include("${CMAKE_CURRENT_LIST_DIR}/h2gmp-targets.cmake")
endif()

set(H2GMP_LIBRARIES libh2gmp)
set(H2GMP_INCLUDE_DIRS "/home/jajhall/h2gmp/src")
set(H2GMP_FOUND TRUE)
