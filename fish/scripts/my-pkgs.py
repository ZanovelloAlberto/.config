#!/usr/bin/python
# import sys
import os 

list = [
'cmus',
# 'please',
'neovim',
'fish',
'sway',
'foot',
'grim',
# 'renode',
'slurp',
        ]


os.system("yay -Sy --noconfirm {}".format(' '.join(list)));
