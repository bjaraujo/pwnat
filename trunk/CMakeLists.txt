
PROJECT(pwnat)

CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

IF(WIN32)
SET(PWNAT_NET_HEADERS
client.h
common.h
destination.h
gettimeofday.h
list.h
message.h
packet.h
socket.h
xgetopt.h
)
ELSE(WIN32)
SET(PWNAT_NET_HEADERS
client.h
common.h
destination.h
list.h
message.h
packet.h
socket.h
xgetopt.h
)
ENDIF(WIN32)

IF(WIN32)
SET(PWNAT_NET_SOURCES
client.c
destination.c
gettimeofday.c
list.c
message.c
packet.c
pwnat.c
socket.c
strlcpy.c
udpclient.c
udpserver.c
xgetopt.c
)
ELSE(WIN32)
SET(PWNAT_NET_SOURCES
client.c
destination.c
list.c
message.c
packet.c
pwnat.c
socket.c
strlcpy.c
udpclient.c
udpserver.c
xgetopt.c
)
ENDIF(WIN32)

SOURCE_GROUP("Header Files" FILES ${PWNAT_NET_HEADERS})
SOURCE_GROUP("Source Files" FILES ${PWNAT_NET_SOURCES})

INCLUDE_DIRECTORIES(
)

ADD_EXECUTABLE(pwnat ${PWNAT_NET_HEADERS} ${PWNAT_NET_SOURCES})

IF(WIN32)
TARGET_LINK_LIBRARIES(pwnat
Ws2_32
)
ELSE(WIN32)
TARGET_LINK_LIBRARIES(pwnat
)
ENDIF(WIN32)

