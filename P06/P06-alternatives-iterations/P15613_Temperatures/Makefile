# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author F. de Sande
# @date 8 Jun 2020
# @brief A Makefile example for HelloWorld program
# 
# @see https://www.gnu.org/software/make/
# @see http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

CXX = g++						# The C++ compiler command
CXXFLAGS = -O0		  # The C++ compiler options (preserve debug symbols and No optimization)
LDFLAGS =						# The linker options (if any)
OBJS = *.cc

# The all target builds all of the programs handled by the makefile.
# This target has the dependency chain:
#     all -> hello -> hello.o -> hello.cc
all: file_append

programa: programa.cc 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean

# The following rule is effectively built into make and
# therefore need not be explicitly specified:
# hello_world.o: hello_world.cc
#
	$(CXX) $(CXXFLAGS) -c $<

# The clean target removes all of the executable files
# and object files produced by the build process
# We can use it for additional housekeeping purposes
clean :
	rm -f *.o
	rm -rf *~ basura* b i
	rm -rf a.out 
	rm -drf programad/ 
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;

cleanall :
	rm -f *.o
	rm -rf *~ basura* b i
	rm -rf a.out 
	rm -drf programa programad/ programa.tar.gz programa.cc
	find . -name '*~' -exec rm {} \;

git:
	git pull 
	git add . 
	git commit -m "Another example" 
	git push

tar: programa.cc
	mkdir programad/
	mv programa.cc programad/
	tar cvfz programa.tar.gz programad/
	mv programad/programa.cc ./
	rm -drf programad/





