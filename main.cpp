#include <iostream>
extern "C"
{
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libavutil/avutil.h>
#include <libswscale/swscale.h>
}

int main() {
    //av_register_all();
    
    AVFormatContext *pFormatCtx = nullptr;
    const char *filePath = "test.mp4";  // Change this to an actual file path

    if (avformat_open_input(&pFormatCtx, filePath, nullptr, nullptr) != 0) {
        std::cerr << "Could not open file: " << filePath << std::endl;
        return -1;
    }

    std::cout << "File opened successfully!" << std::endl;

    avformat_close_input(&pFormatCtx);
    return 0;
}
