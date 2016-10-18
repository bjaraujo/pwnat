
PROJECT(pwnat)

CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

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

SOURCE_GROUP("Header Files" FILES ${PWNAT_NET_HEADERS})
SOURCE_GROUP("Source Files" FILES ${PWNAT_NET_SOURCES})

INCLUDE_DIRECTORIES(
)

ADD_EXECUTABLE(pwnat ${PWNAT_NET_HEADERS} ${PWNAT_NET_SOURCES})

IF(WIN32)
	TARGET_LINK_LIBRARIES(pwnat
		Ws2_32
	)
ENDIF(WIN32)

