# uno {
#
# }

if status is-interactive
    # Commands to run in interactive sessions can go here
end

if status --is-login

	
	sudo pacman -Sy --noconfirm git 
	$SHELL -c cd ~/.config/yay/ && makepkg -si --noconfirm
	# cd ~/.config/yay/ && makepkg -si --noconfirm 

	$SHELL -c yay -Sy 
	
	

	# wl-clipboard



	sway

end 

