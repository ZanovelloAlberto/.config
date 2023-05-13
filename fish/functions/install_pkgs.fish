# needed pakages 
set LIST "
cmus \		
please \ 		
neovim 	\	
fish 		\
sway 		\
foot 		\
renode 		\
slurp  		
	"
# music player
# build system
# text editor
# shell 
# wm
# term	
# embedded emulator	
# screen 



function install_pkgs 
	command yay -Sy --noconfirm $LIST
end
