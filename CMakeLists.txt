cmake_minimum_required(VERSION 3.14)

include(cmake/prelude.cmake)

project(
    evil-engine
    VERSION 0.1.0
    DESCRIPTION "retro-inspired game engine"
    HOMEPAGE_URL "https://leventkaya.com"
    LANGUAGES CXX
)

include(cmake/project-is-top-level.cmake)
include(cmake/variables.cmake)

# ---- Declare library ----

add_library(
    evil-engine_lib OBJECT
    source/lib.cpp
)

target_include_directories(
    evil-engine_lib ${warning_guard}
    PUBLIC
    "\$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/source>"
)

target_compile_features(evil-engine_lib PUBLIC cxx_std_17)

find_package(fmt REQUIRED)
target_link_libraries(evil-engine_lib PRIVATE fmt::fmt)

# ---- Declare executable ----

add_executable(evil-engine_exe source/main.cpp)
add_executable(evil-engine::exe ALIAS evil-engine_exe)

set_property(TARGET evil-engine_exe PROPERTY OUTPUT_NAME evil-engine)

target_compile_features(evil-engine_exe PRIVATE cxx_std_17)

target_link_libraries(evil-engine_exe PRIVATE evil-engine_lib)

# ---- Install rules ----

if(NOT CMAKE_SKIP_INSTALL_RULES)
  include(cmake/install-rules.cmake)
endif()

# ---- Developer mode ----

if(NOT evil-engine_DEVELOPER_MODE)
  return()
elseif(NOT PROJECT_IS_TOP_LEVEL)
  message(
      AUTHOR_WARNING
      "Developer mode is intended for developers of evil-engine"
  )
endif()

include(cmake/dev-mode.cmake)
