cmake_minimum_required(VERSION 3.25)
project(tests)

set(CMAKE_CXX_STANDARD 20)

#set(CUSTOM_LIBRARY_PATH /usr/local/) # /path/to/libraries/dir
#set(OPENSSL_PATH /usr/local/) # /path/to/library/dir
#set(BOOST_PATH /opt/homebrew/opt/boost@1.78) # /path/to/library/dir
#set(OPENSSL_LIBRARY_PATH ${OPENSSL_PATH}/lib)
#set(OPENSSL_HEADERS_PATH ${OPENSSL_PATH}/include)
#set(BOOST_LIBRARY_PATH ${BOOST_PATH}/lib)
#set(BOOST_HEADERS_PATH ${BOOST_PATH}/include)
#
#set(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} ${CUSTOM_LIBRARY_PATH})
#link_directories(${OPENSSL_LIBRARY_PATH} ${BOOST_LIBRARY_PATH})
#include_directories(${OPENSSL_HEADERS_PATH} ${BOOST_HEADERS_PATH})
#
#find_library(OpenSSL openssl
#        PATHS ${OPENSSL_PATH})
#find_library(Crypto crypto
#        PATHS ${OPENSSL_PATH})
#find_library(Boost boost
#        PATHS ${BOOST_PATH})

add_executable(tests main.cpp ../corekeys/cpp-default/CoreKeys.cpp ../corekeys/encryption/EasyEncrypt.cpp ../corekeys/cpp-default/CoreKeys.cpp ../corekeys/cpp-default/vars/arrays.cpp ../corekeys/cpp-default/vars/ids.cpp ../corekeys/cpp-default/vars/keys.cpp ../corekeys/cpp-default/vars/maps.cpp)
target_link_libraries(tests ssl crypto)