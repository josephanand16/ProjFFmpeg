CXX = g++
CXXFLAGS = -I/home/janand/ffmpeg
LDFLAGS = -lavformat -lavcodec -lavutil -lswscale -lswresample -lz -ldrm

TARGET = ffmpeg_test
SRCS = main.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) -v $(CXXFLAGS) $(SRCS) $(LDFLAGS) -o $(TARGET)

clean:
	rm -f $(TARGET)
