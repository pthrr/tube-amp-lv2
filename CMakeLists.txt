cmake_minimum_required(VERSION 3.13.4)
project(TUBEAMP LANGUAGES CXX C VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED)

include_directories(inc)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_C_FLAGS "-Wall -Wextra")
set(CMAKE_C_FLAGS_DEBUG "-O0 -g")
set(CMAKE_C_FLAGS_MINSIZEREL "-Os")
set(CMAKE_C_FLAGS_RELEASE "-O2")
set(CMAKE_C_FLAGS_RELWITHDEBINFO "-O2 -g")

SET(GCC_COVERAGE_COMPILE_FLAGS "")
SET(GCC_COVERAGE_LINK_FLAGS    "-lm")
SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")

list(APPEND LLVM_FLAGS
  -Wall
  -Wextra
  -Weverything
  -Wno-c++98-compat-pedantic
  -Wno-conversion
  -Wno-covered-switch-default
  -Wno-deprecated
  -Wno-disabled-macro-expansion
  -Wno-double-promotion
  -Wno-comma
  -Wno-extra-semi
  -Wno-packed
  -Wno-padded
  -Wno-sign-compare
  -Wno-float-conversion
  -Wno-float-equal
  -Wno-format-nonliteral
  -Wno-gcc-compat
  -Wno-global-constructors
  -Wno-exit-time-destructors
  -Wno-nested-anon-types
  -Wno-non-modular-include-in-module
  -Wno-old-style-cast
  -Wno-range-loop-analysis
  -Wno-reserved-id-macro
  -Wno-shorten-64-to-32
  -Wno-switch-enum
  -Wno-thread-safety-negative
  -Wno-undef
  -Wno-unknown-warning-option
  -Wno-unreachable-code
  -Wno-unused-macros
  -Wno-weak-vtables
  -Wbitfield-enum-conversion
  -Wbool-conversion
  -Wconstant-conversion
  -Wenum-conversion
  -Wint-conversion
  -Wliteral-conversion
  -Wnon-literal-null-conversion
  -Wnull-conversion
  -Wobjc-literal-conversion
  -Wno-sign-conversion
  -Wstring-conversion
)

list(APPEND LLVM_TEST_FLAGS
  -Wno-c99-extensions
  -Wno-missing-noreturn
  -Wno-missing-prototypes
  -Wno-missing-variable-declarations
  -Wno-null-conversion
  -Wno-shadow
  -Wno-shift-sign-overflow
  -Wno-sign-compare
  -Wno-unused-function
  -Wno-unused-member-function
  -Wno-unused-parameter
  -Wno-unused-private-field
  -Wno-unused-template
  -Wno-used-but-marked-unused
  -Wno-zero-as-null-pointer-constant
  -Wno-gnu-zero-variadic-macro-arguments
)

string(REPLACE ";" " " CXX_FLAGS "${LLVM_FLAGS}")
set(CMAKE_CXX_FLAGS ${CXX_FLAGS})
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_CXX_FLAGS_MINSIZEREL "-Os")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")

set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory(src)
