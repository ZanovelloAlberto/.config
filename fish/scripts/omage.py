#!/usr/bin/python

import sys
import os 

import array, fcntl, termios
buf = array.array('H', [0, 0, 0, 0])
fcntl.ioctl(1, termios.TIOCGWINSZ, buf)
os.system("img2sixel --width {} {}".format(buf[2], sys.argv[1]))
# while(1): 
#     os.system("sleep 1000")
#     os.system("echo 1000")
# # print(buf[3])
