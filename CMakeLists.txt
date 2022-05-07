project(roamlib)

add_library(roamlib STATIC
  player.c
  )
target_link_libraries(roamlib PUBLIC)
