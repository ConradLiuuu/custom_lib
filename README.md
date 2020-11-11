Notes

find_package():
add packages in this section
i.e.
find_package(catkin REQUIRED COMPONMENTS
  roscpp
  rospy
)

catkin_package():
add packages which you use from this package
catkin_package() must to be called before add_library() and install()
i.e.
catkin_package(
  INCLUDE DIRS include
  LIBRARIES ${PROJECT_NAME}
  CATKIN_DEPEMDS roscpp rospy
)

include_directories():
add include header directories
i.e.
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_libeary():
use add_library() to build custom libraries and then need to call target_link_libraries()
i.e.
add_libeary(${PROJECT_NAME}
  src/my_super_roscpp_library.cpp
  src/calculate.cpp
)

target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})

install():
after building libraries, install your libraries with these lines
i.e.
install(
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}
)
install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
)

then usage of the custom libraries is the same as other package libraries. 
