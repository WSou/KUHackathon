
CXX = g++

CTAGS = -Wall -g -DQT_NO_VERSION_TAGGING -I/usr/include/qt -fPIC

TARGET = main.cpp mapClass.cpp

OUTPUT = main.o

all: $(TARGET)
	$(CXX) $(CTAGS) $(TARGET) -o $(OUTPUT)

clean:
	$(RM) $(TARGET)
