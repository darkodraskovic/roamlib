project(roamlib)

add_library(roamlib STATIC
  player.c
  map.c
  draw.c
  )
target_link_libraries(roamlib PUBLIC)
