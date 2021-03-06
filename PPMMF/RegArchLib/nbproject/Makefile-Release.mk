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
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Sources/cAbstCondMean.o \
	${OBJECTDIR}/Sources/cAbstResiduals.o \
	${OBJECTDIR}/Sources/cAr.o \
	${OBJECTDIR}/Sources/cClassExample.o \
	${OBJECTDIR}/Sources/cCondMean.o \
	${OBJECTDIR}/Sources/cConst.o \
	${OBJECTDIR}/Sources/cMa.o \
	${OBJECTDIR}/Sources/cNormResiduals.o \
	${OBJECTDIR}/Sources/cRegArchModel.o \
	${OBJECTDIR}/Sources/cRegArchValue.o \
	${OBJECTDIR}/Sources/cStudentResiduals.o


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
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libregarchlib.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libregarchlib.a: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libregarchlib.a
	${AR} -rv ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libregarchlib.a ${OBJECTFILES} 
	$(RANLIB) ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libregarchlib.a

${OBJECTDIR}/Sources/cAbstCondMean.o: Sources/cAbstCondMean.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/cAbstCondMean.o Sources/cAbstCondMean.cpp

${OBJECTDIR}/Sources/cAbstResiduals.o: Sources/cAbstResiduals.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/cAbstResiduals.o Sources/cAbstResiduals.cpp

${OBJECTDIR}/Sources/cAr.o: Sources/cAr.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/cAr.o Sources/cAr.cpp

${OBJECTDIR}/Sources/cClassExample.o: Sources/cClassExample.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/cClassExample.o Sources/cClassExample.cpp

${OBJECTDIR}/Sources/cCondMean.o: Sources/cCondMean.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/cCondMean.o Sources/cCondMean.cpp

${OBJECTDIR}/Sources/cConst.o: Sources/cConst.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/cConst.o Sources/cConst.cpp

${OBJECTDIR}/Sources/cMa.o: Sources/cMa.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/cMa.o Sources/cMa.cpp

${OBJECTDIR}/Sources/cNormResiduals.o: Sources/cNormResiduals.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/cNormResiduals.o Sources/cNormResiduals.cpp

${OBJECTDIR}/Sources/cRegArchModel.o: Sources/cRegArchModel.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/cRegArchModel.o Sources/cRegArchModel.cpp

${OBJECTDIR}/Sources/cRegArchValue.o: Sources/cRegArchValue.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/cRegArchValue.o Sources/cRegArchValue.cpp

${OBJECTDIR}/Sources/cStudentResiduals.o: Sources/cStudentResiduals.cpp 
	${MKDIR} -p ${OBJECTDIR}/Sources
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sources/cStudentResiduals.o Sources/cStudentResiduals.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libregarchlib.a

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
