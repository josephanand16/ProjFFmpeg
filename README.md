# ProjFFmpeg
A mini project to help organize my old music collection, add album art, add lyrics and convert them to ALAC.
I am running out of space in my hard-disk and I need a more personalized tool for media codec conversion. 
Search and Convert large old DVD MOV formats to encoded h264 or h265 with mkv containers. 
This can save some amount of space and MKV is known to be resileint to memory corruptions.

This project will be split in two parts. Audio and Video.
## Audio 
1. Convert FLACs/mp3 to ALAC.
2. Ensure uniform album info, artist info and album art.
3. This would need a GUI that loads the album and songs.

## Video
1. Convert large old DVD MOV formats to encoded h264 or h265.
2. Change all of the containers from mpeg-4, avi, mov to MKV.

## Setup

1. Clone and build FFMPEG
   https://github.com/FFmpeg/FFmpeg.git
    ./configure
    make
    make install
2. Install the following packages
   apt-get install yasm
   apt-get install zlib1g-dev
   apt-get install libdrm-dev
   apt-get install libopus-dev

   
   
