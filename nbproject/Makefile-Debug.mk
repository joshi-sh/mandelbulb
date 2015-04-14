#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin_4.x-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/camera.o \
	${OBJECTDIR}/distances.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L../../../Downloads/eigen-eigen-10219c95fe65/Eigen -L/cygdrive/C/Program\ Files/NVIDIA\ GPU\ Computing\ Toolkit/CUDA/v6.5/lib/x64

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/metaballtracer.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/metaballtracer.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/metaballtracer ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/camera.o: camera.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../Downloads/eigen-eigen-10219c95fe65 -I/cygdrive/C/Program\ Files/NVIDIA\ GPU\ Computing\ Toolkit/CUDA/v6.5/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/camera.o camera.cpp

${OBJECTDIR}/distances.o: distances.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../Downloads/eigen-eigen-10219c95fe65 -I/cygdrive/C/Program\ Files/NVIDIA\ GPU\ Computing\ Toolkit/CUDA/v6.5/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/distances.o distances.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../../Downloads/eigen-eigen-10219c95fe65 -I/cygdrive/C/Program\ Files/NVIDIA\ GPU\ Computing\ Toolkit/CUDA/v6.5/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/metaballtracer.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
